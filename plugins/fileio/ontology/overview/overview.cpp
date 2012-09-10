#include "overview.h"
#include <overviewclassshape.h>
#include <stack>
#include <cmath>
#include <limits>
#include "libvpsc/solve_VPSC.h"
#include "libvpsc/variable.h"
#include "libvpsc/constraint.h"
#include "libdunnartcanvas/graphlayout.h"
#include "libdunnartcanvas/graphdata.h"

#include <ogdf/basic/Graph.h>
#include <ogdf/basic/GraphAttributes.h>
#include <ogdf/tree/TreeLayout.h>
#include <ogdf/tree/RadialTreeLayout.h>
#include <ogdf/energybased/FastMultipoleEmbedder.h>
#include <ogdf/energybased/SpringEmbedderFR.h>
#include <ogdf/basic/Graph_d.h>


#define PI 3.14159265

using namespace dunnart;
using namespace vpsc;
using namespace std;
using namespace ogdf;
Overview::Overview(int numOfNode,OwlOntology *ontology,Canvas * canvas,QObject *parent) :
    QObject(parent)
{
    this->numOfClasses = numOfNode;
//    this->sortSubclassesByAscending(ontology->classes);
    cout<<"Init key concept..."<<endl;
    kcTool=new KeyConceptClass(ontology);
    originalclasses.clear();
    cout<<"Get key concept classes..."<<endl;
    originalclasses.append(kcTool->getNKeyClasses(this->numOfClasses));
    classes.clear();
    cout<<"Convert to overview shapes..."<<endl;
    classes.append(convertOverviewShapes(originalclasses));

    m_ontology = ontology;
    this->m_detailview = new DetailedView(canvas,ontology);
    this->isOrthogonalTreeLayout = false;
    this->orientation = ogdf::leftToRight;
    this->currentLayoutMethod = "Orthogonal Tree";
    this->detailview_centrenode = NULL;

    this->setTreeLevels();
}

QList<OwlClass *> Overview::convertOverviewShapes(QList<OwlClass *> classes)
{
    QList<OwlClass *> result;
    //dup owlclass
    for(int i=0; i<classes.size(); i++)
    {
        OwlClass * newclass = new OwlClass();
        OwlClass * oriclass = classes[i];
        newclass->disjointclasses.append(oriclass->disjointclasses);
        newclass->equivalentclasses.append(oriclass->equivalentclasses);
        newclass->individuals.append(oriclass->individuals);
        newclass->propertydomains.append(oriclass->propertydomains);
        newclass->propertyranges.append(oriclass->propertyranges);
        newclass->anonymousDisjoints.append(oriclass->anonymousDisjoints);
        newclass->anonymousEqus<<oriclass->anonymousEqus;
        newclass->anonymousSubs<<oriclass->anonymousSubs;
        newclass->anonymousSupers<<oriclass->anonymousSupers;
        newclass->URI = oriclass->URI;
        newclass->shortname = oriclass->shortname;

        //overview shape
        newclass->overviewshape = new OverviewClassShape();
        newclass->overviewshape->setIdString("Overview::"+newclass->shortname);
        newclass->overviewshape->setToolTip(newclass->shortname);
        newclass->overviewshape->setStatus(OverviewClassShape::STATUS_OutDetailview);

        //sub/sup, connectors?

        result.append(newclass);
    }
    //deal with subclass
    for(int i=0;i<classes.size();i++)
    {
        OwlClass * nc = result[i];
        OwlClass * oc = classes[i];
        stack<OwlClass *> stk;
        //push all original subclasses to stack
        for(int j=0;j<oc->subclasses.size();j++)
        {
            stk.push(oc->subclasses[j]);
        }
        //check if they are in overview
        while(!stk.empty())
        {
            OwlClass * tmpc = stk.top();
            stk.pop();
            int idx=getIndexByShortname(result,tmpc->shortname);
            //it is in the overview,add to subclass list
            if(idx!=-1){
                nc->subclasses.append(result[idx]);
            }
            //not in overview, search its children
            else{
                for(int j=0;j<tmpc->subclasses.size();j++)
                    stk.push(tmpc->subclasses[j]);
            }
        }
    }
    //use sub to generate sup
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i]->subclasses.size();j++)
        {
            result[i]->subclasses[j]->superclasses.append(result[i]);
        }
    }
    return result;
}

int Overview::getIndexByShortname(QList<OwlClass *> lst, QString shortname)
{
    int rs=-1;
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i]->shortname==shortname)
        {
            rs=i;
            break;
        }
    }
    return rs;
}
void Overview::drawOverview(OverviewDockWidget *wid)
{
    wid->clearall();    
    wid->animationPre();
    //draw shape
    for(int i=0;i<classes.size();i++){
        wid->addOverviewShape(classes[i]);
    }
    wid->animationStart();
    //draw line
    if(isOrthogonalTreeLayout){
        QPen pen = QPen(QColor("black"));
//        for(int i=0;i<treeconnectors.size();i++)
//        {
//            wid->addTreeConnector(treeconnectors[i],pen);
//        }
        for(int i=0;i<classes.size();i++)
        {
            pen = QPen(QColor("black"));
            bool inlst = this->indetailedCls.contains(classes[i]);
            if(inlst)pen = QPen(QColor("red"));
            if((!classes[i]->subclasses.empty())&&classes[i]->URI.left(9)!="[COMPACT]")
            {
                double sx = classes[i]->overviewshape->pos().rx();
                double sy = classes[i]->overviewshape->pos().ry();
                double ex;
                double ey;

                double sp;
                double ep;
                double cp;
                QList<OwlClass *> rsub;
                if(!classes[i]->subclasses.empty()){
                    for(int j=0;j<classes[i]->subclasses.size();j++){
                        if(classes[i]->subclasses[j]->superclasses[0]==classes[i])
                            rsub.append(classes[i]->subclasses[j]);
                    }
                }

                if(this->orientation == ogdf::leftToRight)
                {
                    cp = ( classes[i]->overviewshape->pos().rx()
                           + classes[i]->subclasses[0]->overviewshape->pos().rx())/2;
                    sx += classes[i]->overviewshape->width()/2;

                    ex = sx;
                    ey = sy;

                    if(!rsub.empty()){
                        cp = ( classes[i]->overviewshape->pos().rx()
                               + rsub[0]->overviewshape->pos().rx())/2;
                        ex=cp;
                        sp = ep = rsub[0]->overviewshape->pos().ry();
                        for(int j=1;j<rsub.size();j++){
                            double py = rsub[j]->overviewshape->pos().ry();
                            sp = std::min(sp,py);
                            ep = std::max(ep,py);
                        }
                        wid->addLine(cp,sp,cp,ep,pen);
                    }
                }
                else if(this->orientation == ogdf::rightToLeft)
                {
                    cp = ( classes[i]->overviewshape->pos().rx()
                           + classes[i]->subclasses[0]->overviewshape->pos().rx())/2;
                    sx-= classes[i]->overviewshape->width()/2;

                    ex = sx;
                    ey = sy;

                    if(!rsub.empty()){
                        cp = ( classes[i]->overviewshape->pos().rx()
                               + rsub[0]->overviewshape->pos().rx())/2;
                        ex=cp;
                        sp = ep = rsub[0]->overviewshape->pos().ry();
                        for(int j=1;j<rsub.size();j++){
                            double py = rsub[j]->overviewshape->pos().ry();
                            sp = std::min(sp,py);
                            ep = std::max(ep,py);
                        }
                        wid->addLine(cp,sp,cp,ep,pen);
                    }
                }
                else if(this->orientation == ogdf::bottomToTop)
                {
                    cp = ( classes[i]->overviewshape->pos().ry()
                           + classes[i]->subclasses[0]->overviewshape->pos().ry())/2;
                    ex = sx;                    

                    sy += classes[i]->overviewshape->height()/2;
                    ey = sy;

                    if(!rsub.empty()){
                        cp = ( classes[i]->overviewshape->pos().ry()
                               + rsub[0]->overviewshape->pos().ry())/2;
                        ey = cp;
                        sp = ep = rsub[0]->overviewshape->pos().rx();
                        for(int j=1;j<rsub.size();j++){
                            double px = rsub[j]->overviewshape->pos().rx();
                            sp = std::min(sp,px);
                            ep = std::max(ep,px);
                        }
                        wid->addLine(sp,cp,ep,cp,pen);
                    }
                }
                else{
                    cp = ( classes[i]->overviewshape->pos().ry()
                           + classes[i]->subclasses[0]->overviewshape->pos().ry())/2;
                    ex = sx;

                    sy -= classes[i]->overviewshape->height()/2;
                    ey = sy;

                    if(!rsub.empty()){
                        cp = ( classes[i]->overviewshape->pos().ry()
                               + rsub[0]->overviewshape->pos().ry())/2;
                        ey = cp;
                        sp = ep = rsub[0]->overviewshape->pos().rx();
                        for(int j=1;j<rsub.size();j++){
                            double px = rsub[j]->overviewshape->pos().rx();
                            sp = std::min(sp,px);
                            ep = std::max(ep,px);
                        }
                        wid->addLine(sp,cp,ep,cp,pen);
                    }
                }

                wid->addLine(sx,sy,ex,ey,pen);

            }
            if(!classes[i]->superclasses.empty()){
                double sx = classes[i]->overviewshape->pos().rx();
                double sy = classes[i]->overviewshape->pos().ry();
                double ex = sx;
                double ey = sy;
                if(this->orientation == ogdf::leftToRight)
                {                    
                    ex = (sx+classes[i]->superclasses[0]->overviewshape->pos().rx())/2;
                    ey = sy;
                    sx = sx - classes[i]->overviewshape->width()/2;
                }
                else if(this->orientation == ogdf::rightToLeft)
                {
                    ex = (sx+classes[i]->superclasses[0]->overviewshape->pos().rx())/2;
                    ey = sy;
                    sx = sx + classes[i]->overviewshape->width()/2;
                }
                else if(this->orientation == ogdf::bottomToTop)
                {
                    ex = sx;
                    ey = (sy+classes[i]->superclasses[0]->overviewshape->pos().ry())/2;
                    sy-= classes[i]->overviewshape->height()/2;
                }
                else{
                    ex = sx;
                    ey = (sy+classes[i]->superclasses[0]->overviewshape->pos().ry())/2;
                    sy+= classes[i]->overviewshape->height()/2;
                }
                wid->addLine(sx,sy,ex,ey,pen);
            }
            if(classes[i]->superclasses.size()>1)
            {                
                for(int j=1;j<classes[i]->superclasses.size();j++){
                    if(inlst&&this->indetailedCls.contains(classes[i]->superclasses[j]))pen = QPen(QColor("red"));
                    else pen = QPen(QColor("black"));
                    wid->addOverviewLine(classes[i],classes[i]->superclasses[j],pen);
                }
            }
        }
    }
    else
    {
        for(int i=0;i<classes.size();i++){
            for(int j=0;j<classes[i]->subclasses.size();j++)
            {
                QPen pen = QPen(QColor("black"));
                if(indetailedCls.contains(classes[i])&&indetailedCls.contains(classes[i]->subclasses[j]))
                {
                    pen = QPen(QColor("red"));
                }
                wid->addOverviewLine(classes[i]->subclasses[j],classes[i],pen);
            }
        }
    }
    wid->fixSceneRect();
    wid->highlightItems(indetailedCls);

}

void Overview::drawOverview(Canvas *canvas)
{
    //draw shape
    for(int i=0;i<classes.size();i++){
        canvas->addItem(classes[i]->overviewshape);
    }
    //draw connector
    for(int i=0;i<classes.size();i++){
        for(int j=0;j<classes[i]->subclasses.size();j++)
        {
            Connector * conn=new Connector();
            conn->initWithConnection(classes[i]->subclasses[j]->overviewshape,classes[i]->overviewshape);
            conn->setDirected(true);
            canvas->addItem(conn);
        }
    }
}

/** algorithm implementation functions **/
void Overview::setInitialLayout()
{
    if(classes.size()==0)cout<<"Call getOverviewClasses() to init classes first!"<<endl;

    QTime now = QTime::currentTime();
    qsrand(now.msec());

    for(int i=0;i<classes.size();i++){
        int x=qrand()%200;
        int y=qrand()%200;
        classes[i]->overviewshape->setPosAndSize(QPointF(x,y),QSizeF(4,4));
        classes[i]->overviewshape->setStatus(OverviewClassShape::STATUS_OutDetailview);
    }
}

void Overview::computeShortestPath()
{
    //Using Floyd-Warshall

    int max=29999;
    int n = classes.size();
    //init distances set to max first
    for(int i=0;i<n;i++)
    {
        QList<int> row;
        for(int j=0;j<n;j++)
        {
            row.append(max);
        }
        distance.append(row);
    }
    //distance from class to its sub/sup is 1
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<classes[i]->subclasses.size();j++)
        {
            int idx = getIndexByShortname(classes,classes[i]->subclasses[j]->shortname);
            distance[i][idx]=1;
        }
        for(int j=0;j<classes[i]->superclasses.size();j++)
        {
            int idx = getIndexByShortname(classes,classes[i]->superclasses[j]->shortname);
            distance[i][idx]=1;
        }
    }
    //floyd
    for(int u=0;u<n;u++)
        for(int v=0;v<n;v++)
            for(int w=0;w<n;w++)
                if(v!=w && distance[v][u]+distance[u][w]<distance[v][w])
                {
                    distance[v][w]=distance[v][u]+distance[u][w];
                }
    //print
//    cout<<"---------- Distances ----------"<<endl;
//    for(int i=0;i<n;i++)
//    {
//        cout<<"["<<i<<"] "<<classes[i]->shortname.toStdString()<<"\t";
//        for(int j=0;j<n;j++)
//        {
//            cout<<distance[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
}

QList<OwlClass *> Overview::k_centers(QList<OwlClass *> nodes, int k)
{
    QList<OwlClass *> result;
    //add the first node as k0
    result.append(nodes[0]);
    //cout<<k<<" -- K-centre[0]:"<<result.last()->shortname.toStdString()<<endl;
    for(int i=1;i<k;i++)
    {
        result.append(getFarthestNode(result));
       // cout<<"K-centre["<<i<<"]:"<<result.last()->shortname.toStdString()<<endl;
    }

    return result;
}

OwlClass * Overview::getFarthestNode(QList<OwlClass *> nodes)
{
   // cout<<"=====getFarthestNode====="<<endl;
    int idxfstnode=-1;
    int fstdistance=0;
    for(int i=0;i<nodes.size();i++)
    {
        int idx=getIndexByShortname(classes,nodes[i]->shortname);
        for(int j=0;j<classes.size();j++)
        {

            if((!nodes.contains(classes[j]))&&(distance[idx][j]>fstdistance)){
                //cout<<"D["<<idx<<"]["<<j<<"]:"<<distance[idx][j]<<" "<<endl;
                fstdistance=distance[idx][j];
                idxfstnode = j;
            }
        }
//        cout<<endl;
    }
    return classes[idxfstnode];
}

OwlClass * Overview::getNearestCenter(QList<OwlClass *> centers, OwlClass * node)
{
    //if node is center
    if(centers.contains(node))return node;

    //else
    int mindistance = 29999;
    int idxofmincenter = -1;
    int nodeidx = getIndexByShortname(classes,node->shortname);
    for(int i=0;i<centers.size();i++)
    {
        int idx=getIndexByShortname(classes,centers[i]->shortname);
        if(distance[idx][nodeidx]<mindistance)
        {
            mindistance=distance[idx][nodeidx];
            idxofmincenter=idx;
        }
    }
    return classes[idxofmincenter];
}

void Overview::localLayout(QList<OwlClass *> graph, int k, int iteration)
{
    /*
    LocalLayout(dV ×V , L, k, Iterations)
        %Goal: Find a locally nice layout L by beautifying k-neighborhoods
        %dV×V : all-pairs shortest path length
        %L: initialized layout
        %k: radius of neighborhoods

        for i = 1 to Iterations · |V | do
        1. Choose the vertex v with the maximal ∆kv
        2. Compute δkv by solving the above mentioned equations
        3. L(v) ← L(v) + (δkv (x), δkv (y))
        end
      */
    for(int i=0;i<iteration*graph.size();i++){
        int idx = getIndexOfMaxDeltaM(graph);
        QList<double> es=getEs(graph,graph[idx]);
        double dmx = deltaMx(es[0],es[1],es[2],es[3],es[4]);
        double dmy = deltaMy(es[0],es[1],es[2],es[3],es[4]);
//        cout<<"LocalLayout-"<<i<<" Move:"<<graph[idx]->shortname.toStdString()
//           <<" EX="<<es[0]<<" EY="<<es[1]<<" EX2="<<es[2]<<" EXY="<<es[3]<<" EY2="<<es[4]
//          <<" DMX="<<dmx<<" DMY="<<dmy<<endl;
        qreal newposx = graph[idx]->overviewshape->pos().rx() + dmx;
        qreal newposy = graph[idx]->overviewshape->pos().ry() + dmy;

        graph[idx]->overviewshape->setCentrePos(QPointF(newposx,newposy));
    }
}

int Overview::getIndexOfMaxDeltaM(QList<OwlClass *> graph)
{
//    cout<<"--Get Max DeltaM--"<<endl;
    double max=0.0;
    int maxidx = -1;
    for(int i=0;i<graph.size();i++)
    {
        QList<double> es = getEs(graph,graph[i]);
        double tmp = deltaM(es[0],es[1]);
//        cout<<"G["<<i<<"]"<<graph[i]->shortname.toStdString()
//              <<" : ex="<<es[0]<<" ey="<<es[1]<<" deltaM:"<<tmp<<endl;
        if(max<=tmp){
            max=tmp;
            maxidx=i;
        }
    }
//    cout<<"MAX DeltaM=====>"<<max<<" ---Graph : "
//       <<maxidx<<" : "<<graph[maxidx]->shortname.toStdString()<<endl;
    return maxidx;
}

QList<OwlClass *> Overview::k_neighborhood(OwlClass *node, int k)
{
    //must compute distance first!!

    QList<OwlClass *> result;
//    result.append(node);
    int idx = getIndexByShortname(classes,node->shortname);
    for(int i=0;i<classes.size();i++)
    {
        if(distance[idx][i]<k) result.append(classes[i]);
    }
    return result;
}

double Overview::EuclideanDistance(OwlClass *u, OwlClass *v)
{
    double xu=u->overviewshape->pos().rx();
    double yu=u->overviewshape->pos().ry();
    double xv=v->overviewshape->pos().rx();
    double yv=v->overviewshape->pos().ry();
    return sqrt((xu-xv)*(xu-xv)+(yu-yv)*(yu-yv));
}
double Overview::EuclideanDistance(QPointF u, QPointF v)
{
    double xu=u.rx();
    double yu=u.ry();
    double xv=v.rx();
    double yv=v.ry();
    return sqrt((xu-xv)*(xu-xv)+(yu-yv)*(yu-yv));
}
QList<double> Overview::getEs(QList<OwlClass *> graph, OwlClass *node)
{
//    cout<<"----GET ES(Partial derivatives)----"<<node->shortname.toStdString()<<endl;
    QList<double> rs;
    double ex=0.0;
    double ey=0.0;
    double ex2=0.0;
    double exy=0.0;
    double ey2=0.0;
    int idxnode = getIndexByShortname(classes,node->shortname);
    double xnode = node->overviewshape->pos().rx();
    double ynode = node->overviewshape->pos().ry();
//    cout<<"Node POSX:"<<xnode<<" POSY:"<<ynode<<endl;
    for(int i=0;i<graph.size();i++){
        if(graph[i]!=node){
//            cout<<"distance "<<node->shortname.toStdString()<<" - "
//               <<graph[i]->shortname.toStdString()<<" : "<<distance[i][idxnode]<<endl;
            double dij = double(distance[i][idxnode]);
            double kij = 1/(dij*dij);
            double lij = this->SINGLE_EDGE_LENGTH * dij;
            double xi = graph[i]->overviewshape->pos().rx();
            double yi = graph[i]->overviewshape->pos().ry();
            double ed = EuclideanDistance(graph[i],node);
            double ed3= ed*ed*ed;
//            cout<<"kij="<<kij<<" lij="<<lij<<" xi="<<xi<<" yi="<<yi<<" ed="<<ed<<endl;
            ex += kij*(xnode-xi)*(1-lij/ed);
            ey += kij*(ynode-yi)*(1-lij/ed);
            ex2 += kij*(1-(lij*(ynode-yi)*(ynode-yi))/ed3);
            exy += kij*lij*(xnode - xi)*(ynode - yi)/ed3;
            ey2 += kij*(1-(lij*(xnode-xi)*(xnode-xi))/ed3);
//            cout<<" ex+="<<kij*(xnode-xi)*(1-lij/ed)
//                <<" ey+="<<kij*(ynode-yi)*(1-lij/ed)
//                <<" ex2+="<<kij*(1-(lij*(ynode-yi)*(ynode-yi))/ed3)
//                <<" exy+="<<kij*lij*(xnode - xi)*(ynode - yi)/ed3
//                <<" ey2+="<<kij*(1-(lij*(xnode-xi)*(xnode-xi))/ed3)<<endl;
        }
    }
    rs.append(ex);
    rs.append(ey);
    rs.append(ex2);
    rs.append(exy);
    rs.append(ey2);
    return rs;
}

double Overview::deltaM(double ex, double ey)
{
    //deltaM = sqrt(ex*ex+ey*ey)
//    double ex = wA(graph,node);
//    double ey = wB(graph,node);
    return sqrt(ex*ex+ey*ey);
}

double Overview::deltaMx(double ex,double ey,double ex2, double exy, double ey2)
{
    //deltaMx = (exy*ey - ex*ey2)/(ex2*ey2-exy*exy)
    return (exy*ey - ex*ey2)/(ex2*ey2-exy*exy);
}
double Overview::deltaMy(double ex,double ey,double ex2, double exy, double ey2)
{
    //deltaMy = (exy*ex - ey*ex2)/(ex2*ey2-exy*exy)
    return (exy*ex - ey*ex2)/(ex2*ey2-exy*exy);
}

void Overview::projection(QList<OwlClass *> graph)
{
    Variables vs;
    Constraints cs;
    int n = graph.size();
    vs.resize(n*2);
    //variables -- y
    for(int i=0;i<n;i++)
    {
        double yp = graph[i]->overviewshape->pos().y();
        vs[i]=new Variable(i,yp);
    }
    //variables -- x
    for(int i=0;i<n;i++)
    {
        double xp = graph[i]->overviewshape->pos().x();
        vs[i+n]=new Variable(i,xp);
    }

    for(int i=0;i<n;i++)
    {
        QList<int> subidx;
        //constraints -- y
        for(int j=0;j<graph[i]->subclasses.size();j++){
            int idx=getIndexByShortname(graph,graph[i]->subclasses[j]->shortname);
            if(idx!=-1)
            {
                subidx.append(idx);
                Constraint * c = new Constraint(vs[i],vs[idx],this->SINGLE_EDGE_LENGTH,false);
                cs.push_back(c);
            }
        }
        //constraints -- x
        //sort subclasses by x-dim
        for(int i=0;i<subidx.size()-1;i++){
            int minidx=i;
            for(int j=i+1;j<subidx.size();j++){
                if(vs[subidx[j]+n]<vs[subidx[minidx]+n])minidx=j;
            }
            if(minidx!=i)subidx.swap(i,minidx);
        }

        for(int j=0;j<subidx.size()-1;j++)
        {
            Constraint * cy = new Constraint(vs[subidx[j]],vs[subidx[j+1]],0,true);
            Constraint * cx = new Constraint(vs[subidx[j]+n],vs[subidx[j+1]+n],10,false);
            cs.push_back(cy);
            cs.push_back(cx);
        }
    }


    vpsc::Solver * vpsc_solver = new Solver(vs,cs);
    bool rs = vpsc_solver->solve();
    if(rs){
        for(int i=0;i<n;i++){
            QPointF op = graph[i]->overviewshape->pos();
            Variable * vy=vs[i];
            Variable * vx=vs[i+n];
            op.setY(vy->finalPosition);
            op.setX(vx->finalPosition);
            graph[i]->overviewshape->setCentrePos(op);
        }
    }
}
void Overview::FMSLayout(bool isProjection)
{
    cout<<"Set init layout -- "<<QTime::currentTime().toString().toStdString()<<endl;
    this->setInitialLayout();
    cout<<"Shortest path -- "<<QTime::currentTime().toString().toStdString()<<endl;
    computeShortestPath();
    cout<<"FD -- "<<QTime::currentTime().toString().toStdString()<<endl;
    this->localLayout(classes,10,7);
    if(isProjection){
        cout<<"projection -- "<<QTime::currentTime().toString().toStdString()<<endl;
        this->projection(classes);
    }
}

void Overview::overviewFMSLayout(Canvas *canvas)
{
    /*
        LayoutG(V, E)
        Goal: Find L, a nice layout of G
        Constants:
            Rad[= 7] — determines radius of local neighborhoods
            Iterations[= 4] — determines number of iterations in local beautification
            Ratio[= 3] — ratio between number of vertices in two consecutive levels
            MinSize[= 10] — size of the coarsest graph
        Compute the all-pairs shortest path length: dV ×V
        Set up a random layout L
        k ← MinSize
        while k<=|V| do
        centers ← K-Centers(G(V, E) ,k)
        radius = maxv∈centers minu∈centers {dvu } · Rad
        LocalLayout (dcenters×centers , L(centers),radius,Iterations)
        for every v ∈ V do
        L(v) ← L(center(v)) + rand
        k ← k · Ratio
        return L
      */
//    //init layout
    this->setInitialLayout();

//    //draw
    this->drawOverview(canvas);

//    //compute all distances
    computeShortestPath();

    this->localLayout(classes,10,4);
    this->projection(classes);
}

void Overview::quadrantRadialTree(QList<OwlClass *> graph,double rangeAngle)
{
    double rangeangle = rangeAngle;
    //recommand angle range = 45~180
    if(rangeAngle<45) rangeangle = 45;
    if(rangeAngle>180) rangeangle = 180;

    QList<OwlClass *> currentlevel;
    QList<OwlClass *> nextlevel;
    QList<double> angles;
    //find root & init angles
    OwlClass * root=NULL;
    for(int i=0;i<graph.size();i++){
        if(graph[i]->superclasses.empty())
        {
            root = graph[i];
            break;
        }
    }
    if(root==NULL)
    {
        cout<<"QRT: Cannot find root!"<<endl;
        return;
    }
    else
    {
        cout<<"QRT: find root : "<<root->shortname.toStdString()<<endl;
    }

    //compute pos
    root->overviewshape->setCentrePos(QPointF(0,0));
    currentlevel.append(root);
    int level = 0;
    while(!currentlevel.empty()){
        level++;
        double r = this->SINGLE_EDGE_LENGTH*level;
        //draw level 1
        if(level == 1){
            //put all sub to next level
            for(int i=0;i<currentlevel.size();i++)
            {
                nextlevel.append(currentlevel[i]->subclasses);
            }
            double metaAngle = rangeangle/(nextlevel.size()+1);
            angles.clear();
            for(int i=0;i<nextlevel.size();i++)
            {
                double curAngle = metaAngle * (i+1);
                double x = r * cos(curAngle * PI/180);
                double y = r * sin(curAngle * PI/180);
                angles.append(curAngle);
                nextlevel[i]->overviewshape->setCentrePos(QPointF(x,y));
                //cout<<nextlevel[i]->shortname.toStdString()<<" :: x = "<<x<<" y = "<<y<<endl;
            }
        }
        //draw level>2
        if(level>1){
            QList<double> nextangles;
            for(int i=0;i<currentlevel.size();i++)
            {
                //Bisector Limit
                double bisleft = 0.0;
                double bisright = rangeangle;
                if(i!=0){
                    int k=i-1;
                    while(currentlevel[k]->subclasses.empty())
                    {
                        k--;
                        if(k==-1)break;
                    }
                    if(k!=-1)bisleft = (angles[k]+angles[i])/2;
                    double la = (angles[i]-angles[i-1])/2;
                    double leftlimit = angles[i-1] - (acos((level-1)*cos(la*PI/180)/level)-la);
                    if(bisleft<leftlimit)bisleft = leftlimit;
                }
                if(i!=currentlevel.size()-1){
                    int k=i+1;
                    while(currentlevel[k]->subclasses.empty())
                    {
                        k++;
                        if(k==currentlevel.size())break;
                    }
                    if(k!=currentlevel.size())bisright = (angles[i]+angles[k])/2;
                    double ra = (angles[i+1]-angles[i])/2;
                    double rightlimit = angles[i+1] + acos((level-1)*cos(ra*PI/180)/level)-ra;
                    if(bisright<rightlimit)bisright = rightlimit;
                }
                //Tangent Limit
                double tanleft,tanright;
                double arcangle = acos((level-1)/level) * rangeangle/360;
                tanleft = angles[i]-arcangle;
                tanright = angles[i]+arcangle;

                double left = std::min(bisleft,tanleft);
                double right = std::max(bisright,tanright);

                double metaAngle = (right-left)/(currentlevel[i]->subclasses.size()+1);

//                double lx = r * cos(left * PI/180);
//                double ly = r * sin(left * PI/180);
//                double rx = r * cos(right * PI/180);
//                double ry = r * sin(right * PI/180);

//                double l = sqrt((lx-rx)*(lx-rx)+(ly-ry)*(ly-ry));
//                double localAngle = 2 * asin(l/(2*this->SINGLE_EDGE_LENGTH));
//                double metaAngle = localAngle/(currentlevel[i]->subclasses.size()+1);

                for(int j=0;j<currentlevel[i]->subclasses.size();j++){
                    OwlClass * c = currentlevel[i]->subclasses[j];
                    nextlevel.append(c);
                    double curangle = left+metaAngle*(j+1);
                    if(currentlevel[i]->subclasses.size()==1) curangle = angles[i];
                    double x = r * cos(curangle * PI/180);
                    double y = r * sin(curangle * PI/180);
//                    double ca = metaAngle*(j+1);
//                    double x = currentlevel[i]->overviewshape->pos().rx() + cos(ca*PI/180)*this->SINGLE_EDGE_LENGTH;
//                    double y = currentlevel[i]->overviewshape->pos().ry() + sin(ca*PI/180)*this->SINGLE_EDGE_LENGTH;
//                    double curangle = acos(x/r)*180/PI;
                    nextangles.append(curangle);
                    c->overviewshape->setCentrePos(QPointF(x,y));
                }
            }
            angles.clear();
            angles=nextangles;
        }
        //reset cur next
        currentlevel.clear();
        currentlevel.append(nextlevel);
        nextlevel.clear();
    }

}
QList<OwlClass *> Overview::sortSubclassesByAscending(QList<OwlClass *> graph)
{
    cout<<"START size:"<<graph.size()<<endl;
    for(int i=0;i<graph.size();i++){
        QList<OwlClass *> subs = graph[i]->subclasses;
        if(subs.size()>1){
            for(int m=0;m<subs.size()-1;m++){
                int min=m;
                for(int k=m+1;k<subs.size();k++)
                    if(QString::compare(subs[k]->shortname,subs[min]->shortname)<0)
                        min=k;
                if(min!=m)subs.swap(m,min);
            }
        }
    }
    //get root node
    OwlClass * root;
    for(int i=0;i<graph.size();i++){
        if(graph[i]->superclasses.empty())
        {
            root = graph[i];
            break;
        }
    }

    QList<OwlClass *> rg;
    stack<OwlClass *> st;
    rg.append(root);
    st.push(root);

    while(!st.empty()){
        OwlClass * t = st.top();
        st.pop();

        for(int i =0;i<t->subclasses.size();i++){
            OwlClass * tmp = t->subclasses[i];
            if(!rg.contains(tmp)){
                st.push(tmp);
                rg.append(tmp);
            }
        }
    }

    cout<<"END size:"<<rg.size()<<endl;
    return rg;
}

void Overview::computeTreeLevel(int curlevel, OwlClass *node)
{
    node->tree_level=std::max(curlevel,node->tree_level);

    for(int i=0;i<node->subclasses.size();i++){
        computeTreeLevel(curlevel+1,node->subclasses[i]);
    }
}

void Overview::setTreeLevels()
{
    //set tree levels for each node & swap super[0] as the deepest node
    //avoid sub > super (level) !!! consider circle!!
    OwlClass * root;
    for(int i=0;i<classes.size();i++){
        classes[i]->tree_level = -1;
        if(classes[i]->superclasses.empty())root = classes[i];
    }
    if(!root)return;
    this->computeTreeLevel(0,root);
    for(int i=0;i<classes.size();i++){
        for(int j=0;j<classes[i]->superclasses.size();j++){
            if(classes[i]->superclasses[0]->tree_level<classes[i]->superclasses[j]->tree_level)
                classes[i]->superclasses.swap(0,j);
        }
    }
}

void Overview::treeLayout(QList<OwlClass *> graph)
{
    //init graph
    cout<<"Tree layout..."<<endl;
    Graph g;
    GraphAttributes ga(g,GraphAttributes::nodeGraphics|GraphAttributes::edgeGraphics );

//    QList<OwlClass *> newgraph = this->sortSubclassesByAscending(graph);

    QList<OwlClass *> newgraph = graph;

//    //set tree levels for each node & swap super[0] as the deepest node
//    //avoid sub > super (level) !!! consider circle!!
//    OwlClass * root;
//    for(int i=0;i<newgraph.size();i++){
//        newgraph[i]->tree_level = -1;
//        if(newgraph[i]->superclasses.empty())root = newgraph[i];
//    }
//    this->computeTreeLevel(0,root);
//    for(int i=0;i<newgraph.size();i++){
//        for(int j=0;j<newgraph[i]->superclasses.size();j++){
//            if(newgraph[i]->superclasses[0]->tree_level<newgraph[i]->superclasses[j]->tree_level)
//                newgraph[i]->superclasses.swap(0,j);
//        }
//    }

    QList<node> nodes;
    QList<edge> edges;

    for(int i=0;i<newgraph.size();i++)
    {
        node nd = g.newNode(i);
        ga.x(nd) = newgraph[i]->overviewshape->pos().rx();
        ga.y(nd) = newgraph[i]->overviewshape->pos().ry();
        ga.width(nd) = newgraph[i]->overviewshape->width();
        ga.height(nd) = newgraph[i]->overviewshape->height();
        nodes.append(nd);
    }
    for(int i=0;i<newgraph.size();i++)
    {
        if(!newgraph[i]->superclasses.empty()){
            OwlClass * sup = newgraph[i]->superclasses[0];
            int idx = getIndexByShortname(newgraph,sup->shortname);
            if(idx!=-1){
                edge e =g.newEdge(nodes[idx],nodes[i]);
                edges.append(e);
            }
        }

//        for(int j=0;j<newgraph[i]->subclasses.size();j++){
//            OwlClass * sub = newgraph[i]->subclasses[j];
//            int idx = getIndexByShortname(newgraph,sub->shortname);
//            if(idx!=-1){
//                edge e =g.newEdge(nodes[i],nodes[idx]);
//                edges.append(e);
//            }
//        }
    }

    TreeLayout tl;
    tl.orientation(this->orientation);
    tl.rootSelection(TreeLayout::rootIsSource);
    tl.orthogonalLayout(true);
    tl.siblingDistance(this->TREE_siblingDistance);
    tl.levelDistance(this->TREE_levelDistance);
    tl.subtreeDistance(this->TREE_subtreeDistance);
    tl.treeDistance(this->TREE_treeDistance);
    tl.call(ga);
    tl.callSortByPositions(ga,g);


    for(int i=0;i<nodes.size();i++){
        newgraph[i]->overviewshape->setCentrePos(QPointF(ga.x(nodes[i]),ga.y(nodes[i])));
    }
    treeconnectors.clear();
    for(int i=0;i<edges.size();i++){
        DPolyline pl = ga.bends(edges[i]);
        treeconnectors.append(pl);
    }

    cout<<"Tree layout end."<<endl;
}

void Overview::compactTreeLayout(double maxW,double maxH)
{

    cout<<"CT layout----"<<endl;
    this->isOrthogonalTreeLayout = true;
    this->treeLayout(classes);
//    this->m_detailview->m_canvas->setOptLayoutMode(Canvas::LayeredLayout);

//    this->drawOverview(m_wid);
//    double w = m_wid->m_scene->sceneRect().width();
//    double h = m_wid->m_scene->sceneRect().height();

    double minx = 0.0;
    double maxx = 0.0;
    double miny = 0.0;
    double maxy = 0.0;
    for(int i=0;i<classes.size();i++){
        double px = classes[i]->overviewshape->pos().rx();
        double py = classes[i]->overviewshape->pos().ry();
        minx = std::min(px,minx);
        miny = std::min(py,miny);
        maxx = std::max(px,maxx);
        maxy = std::max(py,maxy);
    }

    double w = maxx - minx;
    double h = maxy - miny;

    cout<<" minx:"<<minx<<" maxx:"<<maxx<<" miny:"<<miny<<" maxy:"<<maxy<<endl;
    cout<<"w = "<<w<<" h = "<<h<<endl;

    if(w>maxW||h>maxH){

        QList<OwlClass *> removedClasses;   //hidden classes
        QList<OwlClass *> addedClasses;     //new classes contains the hidden classes
        for(int i=0;i<classes.size();i++){
            OwlClass * tmp = classes[i];
            if(tmp->subclasses.size()>2){
                QList<OwlClass *> cls;
                //get the subclasses should be hidden
                for(int j=0;j<tmp->subclasses.size();j++){
                    OwlClass * c = tmp->subclasses[j];
                    if(c->subclasses.empty()&&c->superclasses.size()==1)
                    {
                        cls.append(c);
                    }
                }
                if(cls.size()>2){
                    removedClasses.append(cls);
                    OwlClass * ctclass = new OwlClass();
                    ctclass->subclasses.append(cls);
                    ctclass->superclasses.append(tmp);
                    ctclass->shortname = "Contains subclasses:";
                    ctclass->URI = "[COMPACT]"+tmp->shortname;
                    ctclass->overviewshape = new OverviewClassShape();
                    ctclass->overviewshape->setStatus(OverviewClassShape::STATUS_COMPACT);
                    addedClasses.append(ctclass);

                    tmp->subclasses.append(ctclass);
                    for(int k=0;k<cls.size();k++){
                        ctclass->shortname += "\n"+cls[k]->shortname;
                        tmp->subclasses.removeAll(cls[k]);
                    }
                }
                cls.clear();
            }
        }
        cout<<"CT 1..."<<endl;
        for(int i=0;i<removedClasses.size();i++){
            classes.removeAll(removedClasses[i]);
        }
        classes.append(addedClasses);

//        this->sortSubclassesByAscending(classes);

        this->treeLayout(classes);
        this->drawOverview(m_wid);

        //restore
        for(int i=0;i<addedClasses.size();i++){
            for(int j=0;j<addedClasses[i]->superclasses.size();j++)
                addedClasses[i]->superclasses[j]->overviewshape->setCentrePos(addedClasses[i]->overviewshape->pos());

            addedClasses[i]->superclasses[0]->subclasses.append(addedClasses[i]->subclasses);
            addedClasses[i]->superclasses[0]->subclasses.removeAll(addedClasses[i]);
            classes.append(addedClasses[i]->subclasses);
            classes.removeAll(addedClasses[i]);
        }
    }
    else{
        this->drawOverview(m_wid);
    }

    cout<<"CT layout end."<<endl;
}

void Overview::ogdfLayout(QList<OwlClass *> graph)
{
    //init graph
    Graph g;
    GraphAttributes ga(g,GraphAttributes::nodeGraphics|GraphAttributes::edgeGraphics );

    QList<node> nodes;
    QList<edge> edges;
    for(int i=0;i<graph.size();i++)
    {
        node nd = g.newNode();
        ga.x(nd) = graph[i]->overviewshape->pos().rx();
        ga.y(nd) = graph[i]->overviewshape->pos().ry();
        ga.width(nd) = graph[i]->overviewshape->width();
        ga.height(nd) = graph[i]->overviewshape->height();
        nodes.append(nd);
    }
    for(int i=0;i<graph.size();i++)
    {
        if(!graph[i]->superclasses.empty()){
            OwlClass * sup = graph[i]->superclasses[0];
            int idx = getIndexByShortname(graph,sup->shortname);
            if(idx!=-1){
                edge e =g.newEdge(nodes[idx],nodes[i]);
                edges.append(e);
            }
        }
    }

    SpringEmbedderFR tl;
    tl.minDistCC(this->SINGLE_EDGE_LENGTH);
    tl.iterations(16);
    tl.call(ga);


    for(int i=0;i<nodes.size();i++){
        graph[i]->overviewshape->setCentrePos(QPointF(ga.x(nodes[i]),ga.y(nodes[i])));
    }
    for(int i=0;i<edges.size();i++){
        DPolyline pl = ga.bends(edges[i]);
        treeconnectors.append(pl);
    }
}
OwlClass * Overview::getNearestOvClass(OwlClass *oriClass)
{
    QList<OwlClass *> tmps;
    tmps.append(oriClass);
    while(!tmps.empty())
    {
        OwlClass * t = tmps.first();
        tmps.removeFirst();
        for(int i=0;i<t->subclasses.size();i++){
            int idx = this->getIndexByShortname(classes,t->subclasses[i]->shortname);
            if(idx!=-1) return classes[idx];
            else tmps.append(t->subclasses[i]);
        }
        for(int i=0;i<t->superclasses.size();i++){
            int idx = this->getIndexByShortname(classes,t->superclasses[i]->shortname);
            if(idx!=-1) return classes[idx];
            else tmps.append(t->superclasses[i]);
        }
    }
    return NULL;
}

void Overview::widSceneClicked(QPointF pos)
{
    QTime st = QTime::currentTime();
    st.start();

    //compute Euclidean distance with current mouse pos
    double mind = numeric_limits<double>::max();
    int minidx = -1;
    for(int i = 0;i<this->classes.size();i++)
    {
        if(classes[i]->URI.left(9)!="[COMPACT]"){
            double d = EuclideanDistance(pos,classes[i]->overviewshape->pos());
            if(d<mind){
                mind = d;
                minidx = i;
            }
        }
    }

    cout<<"Compute nearest node [Time]:"<<st.elapsed()<<endl;

    this->widSceneClicked(classes[minidx]);


}

void Overview::widSceneClicked(OwlClass *cls)
{
    QTime st = QTime::currentTime();
    st.start();

    for(int i = 0;i<this->classes.size();i++)
    {
        if(classes[i]->URI.left(9)!="[COMPACT]"){
            classes[i]->overviewshape->setStatus(OverviewClassShape::STATUS_OutDetailview);
        }
    }

    cout<<"Clicked overview class : "<<cls->shortname.toStdString()<<endl;

    //sent to detailview
    this->detailview_centrenode = cls;
    int idx = m_ontology->getIndexOfClasses(cls->shortname);


    QList<OwlClass *> rlst;

    if(idx!=-1){
        this->detailview_centrenode = m_ontology->classes[idx];
        rlst.append(this->m_detailview->drawClassView(m_ontology->classes[idx],classes));
    }

    cout<<"Draw detail view [Time]:"<<st.elapsed()<<endl;

/** remove this part since the architecture of overview changes frequently.
    Remove it to keep stable. **/
//    //remove all temp added classes
//    this->originalclasses.clear();
//    this->originalclasses.append(kcTool->getNKeyClasses(this->numOfClasses));
//    tempaddedCls.clear();
//    //original classes list add new
//    for(int i=0;i<rlst.size();i++){
//        if(!originalclasses.contains(rlst[i])){
//            tempaddedCls.append(rlst[i]);
//            this->originalclasses.append(rlst[i]);
//        }
//    }
//    //convert to classes
//    classes.clear();
//    classes.append(this->convertOverviewShapes(originalclasses));


    st.start();


    //get back from detailed view ->ov
    indetailedCls.clear();
    for(int i=0;i<rlst.size();i++){
        int cid = this->getIndexByShortname(classes,rlst[i]->shortname);
        if(cid!=-1){
            indetailedCls.append(classes[cid]);
            if(classes[cid] == cls)cls->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_Focused);
            else if(cls->subclasses.contains(classes[cid]))
            {
                classes[cid]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_SubFocused);
            }
            else if(cls->superclasses.contains(classes[cid]))
            {
                classes[cid]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_SuperFocused);
            }
            else classes[cid]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_Default);
        }
    }
    cout<<"Highlight overview [Time]:"<<st.elapsed()<<endl;

//    st.start();
//    this->updatelayout();
//    cout<<"Update layout [Time]:"<<st.elapsed()<<endl;

    st.start();
    m_ontology->ontoclass_clicked(m_ontology->classes[idx]->shape);
    cout<<"Click event [Time]:"<<st.elapsed()<<endl;
}

void Overview::searchWgtResultClicked(QList<OwlClass *> rs)
{
    //highlight both in ov and dv ?? when release?

    QList<OwlClass *> ovcls;
    for(int i = 0;i<rs.size();i++){
        int idx = getIndexByShortname(classes,rs[i]->shortname);
        if(idx!=-1)ovcls.append(classes[idx]);
        else{
            OwlClass * onc = this->getNearestOvClass(rs[i]);
            ovcls.append(onc);
        }
        //detail view
//        rs[i]->setFocused(true,this->m_ontology->maincanvas);

    }
    //overview
    this->m_wid->highlightSearchResultItems(ovcls);



}

void Overview::searchWgtResultDoubleClicked(OwlClass *c)
{
    cout<<"SR:Clicked ---- "<<c->shortname.toStdString()<<endl;
    int idx = getIndexByShortname(classes,c->shortname);
    if(idx!=-1){
        this->widSceneClicked(classes[idx]);
    }
    else{
        this->detailview_centrenode = c;
        QList<OwlClass *> rlst;
        rlst.append(this->m_detailview->drawClassView(c,classes));
        //get back from detailed view ->ov
        indetailedCls.clear();
        for(int i=0;i<rlst.size();i++){
            int cid = this->getIndexByShortname(classes,rlst[i]->shortname);
            if(cid!=-1){
                indetailedCls.append(classes[cid]);
                if(classes[cid] == c)c->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_Focused);
                else if(c->subclasses.contains(classes[cid]))
                {
                    classes[cid]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_SubFocused);
                }
                else if(c->superclasses.contains(classes[cid]))
                {
                    classes[cid]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_SuperFocused);
                }
                else classes[cid]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_Default);
            }
        }
        m_ontology->ontoclass_clicked(m_ontology->classes[idx]->shape);
    }
}

void Overview::detailView_ClickedClass(QString shortname)
{
    for(int i = 0;i<classes.size();i++){
        if(classes[i]->overviewshape->getStatus()!=OverviewClassShape::STATUS_OutDetailview)
        {
            classes[i]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_Default);
        }
    }
    int idx = getIndexByShortname(classes,shortname);
    if(idx!=-1)classes[idx]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_Focused);

    int oidx = m_ontology->getIndexOfClasses(shortname);
    OwlClass * c = m_ontology->classes[oidx];
    for(int i = 0;i<c->subclasses.size();i++)
    {
        int ix = getIndexByShortname(classes,c->subclasses[i]->shortname);
        if(ix!=-1)classes[ix]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_SubFocused);
    }
    for(int i = 0;i<c->superclasses.size();i++)
    {
        int ix = getIndexByShortname(classes,c->superclasses[i]->shortname);
        if(ix!=-1)classes[ix]->overviewshape->setStatus(OverviewClassShape::STATUS_InDetailview_SuperFocused);
    }

    this->updatelayout();
}

void Overview::detailView_ClassHoverEnter(QString shortname)
{
//    int idx = getIndexByShortname(this->classes,shortname);
//    if(idx!=-1){
//        qreal x = classes[idx]->overviewshape->pos().x() - 6;
//        qreal y = classes[idx]->overviewshape->pos().y() - 6;

//        this->m_wid->hoverCircle->setPos(x,y);
//        this->m_wid->hoverCircle->setVisible(true);

//        cout<<"hover in "<<shortname.toStdString()<<" ["<<idx<<"] POS:"<<x<<","<<y<<endl;
//    }
    m_wid->circleItem(shortname);
}

void Overview::detailView_ClassHoverLeave(QString shortname)
{
    this->m_wid->hoverCircle->setVisible(false);
}

void Overview::layoutmethodChanged(QString method)
{
    cout<<"layout ------>>>>>"<<method.toStdString()<<endl;
    this->currentLayoutMethod = method;
    this->isOrthogonalTreeLayout = false;
    this->setOrthogonalConnectors(this->m_detailview->m_canvas,false);

    if(method == "Tree"){
        this->treeLayout(classes);
        this->m_detailview->m_canvas->setOptLayoutMode(Canvas::LayeredLayout);
    }
    if(method == "Orthogonal Tree"){
        this->compactTreeLayout(200,200);

        this->m_detailview->m_canvas->setOptAutomaticGraphLayout(true);
        this->m_detailview->m_canvas->setOptPreventOverlaps(true);
        this->setOrthogonalConnectors(this->m_detailview->m_canvas,true);
        this->m_detailview->m_canvas->setOptLayoutMode(Canvas::LayeredLayout);
        this->m_detailview->m_canvas->setOptFlowSeparationModifierFromSlider(50);
        this->m_detailview->m_canvas->setOptIdealEdgeLengthModifierFromSlider(40);
        this->m_detailview->m_canvas->setOptLayeredAlignmentPosition(Canvas::ShapeEnd);
        this->m_detailview->m_canvas->fully_restart_graph_layout();
        return;
    }
    if(method == "Radial Tree(90)"){
        this->quadrantRadialTree(classes,90);
        this->m_detailview->m_canvas->setOptLayoutMode(Canvas::LayeredLayout);
    }
    if(method == "Radial Tree(180)"){
        this->quadrantRadialTree(classes,180);
        this->m_detailview->m_canvas->setOptLayoutMode(Canvas::LayeredLayout);
    }
    if(method == "FMS"){
//        this->FMSLayout(false);
        this->ogdfLayout(classes);
        this->m_detailview->m_canvas->setOptLayoutMode(Canvas::OrganicLayout);
        this->m_detailview->m_canvas->setIdealConnectorLength(80);
    }
    if(method == "FMS(Projection)"){
//        this->FMSLayout(true);
        this->ogdfLayout(classes);
        this->projection(classes);
        this->m_detailview->m_canvas->setOptLayoutMode(Canvas::FlowLayout);
        this->m_detailview->m_canvas->setIdealConnectorLength(80);
    }

    this->drawOverview(this->m_wid);

    this->m_detailview->m_canvas->setOptAutomaticGraphLayout(true);
    this->m_detailview->m_canvas->setOptPreventOverlaps(true);
    this->m_detailview->m_canvas->fully_restart_graph_layout();
}

void Overview::directionChanged(QString dr)
{
    if(dr == "L->R"){
        this->orientation = ogdf::leftToRight;
        this->m_detailview->m_canvas->setOptFlowDirection(Canvas::FlowLeft);
        this->m_detailview->m_canvas->setIdealConnectorLength(50);
        this->m_detailview->m_canvas->setOptFlowSeparationModifier(4);

    }
    if(dr == "R->L"){
        this->orientation = ogdf::rightToLeft;
        this->m_detailview->m_canvas->setOptFlowDirection(Canvas::FlowRight);
        this->m_detailview->m_canvas->setIdealConnectorLength(50);
        this->m_detailview->m_canvas->setOptFlowSeparationModifier(4);
    }
    if(dr == "T->B"){
        this->orientation = ogdf::bottomToTop;
        this->m_detailview->m_canvas->setOptFlowDirection(Canvas::FlowUp);
        this->m_detailview->m_canvas->setIdealConnectorLength(30);
        this->m_detailview->m_canvas->setOptFlowSeparationModifier(2);
    }
    if(dr == "B->T"){
        this->m_detailview->m_canvas->setOptFlowDirection(Canvas::FlowDown);
        this->orientation = ogdf::topToBottom;
        this->m_detailview->m_canvas->setIdealConnectorLength(30);
        this->m_detailview->m_canvas->setOptFlowSeparationModifier(2);
    }

    if(this->currentLayoutMethod == "Tree"
            ||this->currentLayoutMethod == "Orthogonal Tree"
            ||this->currentLayoutMethod == "FMS(Projection)")
    {
        this->layoutmethodChanged(this->currentLayoutMethod);
    }
}

void Overview::connectWgt(OverviewDockWidget *wgt){
    this->m_wid = wgt;
    connect(m_ontology,SIGNAL(clickedClass(QString)),this,SLOT(detailView_ClickedClass(QString)));
    connect(m_ontology,SIGNAL(doubleClickedClass(OwlClass*)),this,SLOT(searchWgtResultDoubleClicked(OwlClass*)));
    connect(m_ontology,SIGNAL(hoverEnterClass(QString)),this,SLOT(detailView_ClassHoverEnter(QString)));
    connect(m_ontology,SIGNAL(hoverLeaveClass(QString)),this,SLOT(detailView_ClassHoverLeave(QString)));
    connect(wgt->m_scene,SIGNAL(myclick(QPointF)),this,SLOT(widSceneClicked(QPointF)));
    connect(wgt,SIGNAL(layoutChanged(QString)),this,SLOT(layoutmethodChanged(QString)));
    connect(wgt,SIGNAL(directionChanged(QString)),this,SLOT(directionChanged(QString)));
    connect(wgt,SIGNAL(setOverviewNodeNumber(int)),this,SLOT(changeOverviewNodeLimit(int)));
    connect(wgt,SIGNAL(setDetailviewNodeNumber(int)),this,SLOT(changeDetailviewNodeLimit(int)));
    connect(wgt,SIGNAL(setNumber(int,int)),this,SLOT(changeNodeLimit(int,int)));
}

void Overview::showlayout(Canvas *canvas)
{
    this->quadrantRadialTree(classes,180);
    this->drawOverview(canvas);
}

void Overview::showlayout(OverviewDockWidget *wid)
{
    this->connectWgt(wid);
    m_wid->clearallitems();

    this->directionChanged("L->R");
}
void Overview::updatelayout(){
    this->layoutmethodChanged(this->currentLayoutMethod);
}

void Overview::setOrthogonalConnectors(Canvas *canvas, bool isOrthogonal)
{
    QList<CanvasItem *> canvas_items = canvas->items();

    for (int i = 0; i < canvas_items.size(); ++i)
    {
        Connector *connector = dynamic_cast<Connector *> (canvas_items.at(i));
        if (connector)
        {
            if(isOrthogonal)connector->setRoutingType(Connector::orthogonal);
            else connector->setRoutingType(Connector::polyline);
        }
    }
}

void Overview::changeOverviewNodeLimit(int n)
{
    cout<<"Change overview nodes to "<<n<<endl;


    this->numOfClasses = n;
    originalclasses.clear();
    originalclasses.append(kcTool->getNKeyClasses(this->numOfClasses));
    classes.clear();
    classes.append(convertOverviewShapes(originalclasses));
    numOfClasses=classes.size();

    this->setTreeLevels();

    m_wid->clearallitems();
    if(detailview_centrenode==NULL){
        this->updatelayout();
        return;
    }
    else{
        cout<<this->detailview_centrenode->shortname.toStdString()<<endl;
        this->widSceneClicked(this->detailview_centrenode);
    }

}

void Overview::changeDetailviewNodeLimit(int n)
{
    this->m_detailview->setViewLimit(n,n);

    if(detailview_centrenode==NULL){
        return;
    }
    else{
        this->widSceneClicked(this->detailview_centrenode);
    }
}

void Overview::changeNodeLimit(int overview_n, int detailview_n)
{
    if(this->numOfClasses!=overview_n)
        this->changeOverviewNodeLimit(overview_n);
    if(m_detailview->limitEntityNum!=detailview_n)
        this->changeDetailviewNodeLimit(detailview_n);
}
