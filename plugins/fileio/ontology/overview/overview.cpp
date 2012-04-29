#include "overview.h"
#include <overviewclassshape.h>
#include <stack>
#include "plugins/fileio/ontology/overview/keyconceptclass.h"
#include <cmath>
#include "libvpsc/solve_VPSC.h"
#include "libvpsc/variable.h"
#include "libvpsc/constraint.h"
#include "libdunnartcanvas/graphlayout.h"
#include "libdunnartcanvas/graphdata.h"

#define PI 3.14159265

using namespace dunnart;
using namespace vpsc;
using namespace std;
Overview::Overview(QObject *parent) :
    QObject(parent)
{
    this->numOfClasses = 300;
}

void Overview::getOverviewClasses(OwlOntology *ontology)
{
    KeyConceptClass *kc=new KeyConceptClass(ontology);
    classes = convertOverviewShapes(kc->getNKeyClasses(this->numOfClasses));
    numOfClasses=classes.size();
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
        newclass->equivalentclass = oriclass->equivalentclass;
        newclass->individuals.append(oriclass->individuals);
        newclass->propertydomains.append(oriclass->propertydomains);
        newclass->propertyranges.append(oriclass->propertyranges);
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
        if(lst[i]->shortname.toLower()==shortname.toLower())
        {
            rs=i;
            break;
        }
    }
    return rs;
}
void Overview::drawOverview(OverviewDockWidget *wid)
{
    //draw shape
    for(int i=0;i<classes.size();i++){
        wid->addOverviewShape(classes[i]->overviewshape);
    }
    //draw line
    for(int i=0;i<classes.size();i++){
        for(int j=0;j<classes[i]->subclasses.size();j++)
        {
            wid->addOverviewLine(classes[i]->subclasses[j]->overviewshape,classes[i]->overviewshape);
        }
    }
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
    cout<<k<<" -- K-centre[0]:"<<result.last()->shortname.toStdString()<<endl;
    for(int i=1;i<k;i++)
    {
        result.append(getFarthestNode(result));
        cout<<"K-centre["<<i<<"]:"<<result.last()->shortname.toStdString()<<endl;
    }

    return result;
}

OwlClass * Overview::getFarthestNode(QList<OwlClass *> nodes)
{
    cout<<"=====getFarthestNode====="<<endl;
    int idxfstnode=-1;
    int fstdistance=0;
    for(int i=0;i<nodes.size();i++)
    {
        int idx=getIndexByShortname(classes,nodes[i]->shortname);
        for(int j=0;j<classes.size();j++)
        {

            if((!nodes.contains(classes[j]))&&(distance[idx][j]>fstdistance)){
                cout<<"D["<<idx<<"]["<<j<<"]:"<<distance[idx][j]<<" "<<endl;
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
void Overview::overviewFMSLayout(OverviewDockWidget *wid)
{
    cout<<"Set init layout -- "<<QTime::currentTime().toString().toStdString()<<endl;
    this->setInitialLayout();
    cout<<"Shortest path -- "<<QTime::currentTime().toString().toStdString()<<endl;
    computeShortestPath();
    cout<<"FD -- "<<QTime::currentTime().toString().toStdString()<<endl;
    this->localLayout(classes,10,7);
    cout<<"projection -- "<<QTime::currentTime().toString().toStdString()<<endl;
    this->projection(classes);
    cout<<"draw -- "<<QTime::currentTime().toString().toStdString()<<endl;
    this->drawOverview(wid);
    cout<<"end -- "<<QTime::currentTime().toString().toStdString()<<endl;


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
                cout<<nextlevel[i]->shortname.toStdString()<<" :: x = "<<x<<" y = "<<y<<endl;
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

                double left = min(bisleft,tanleft);
                double right = max(bisright,tanright);

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


void Overview::showlayout(Canvas *canvas)
{
    this->quadrantRadialTree(classes,180);
    this->drawOverview(canvas);
}

void Overview::showlayout(OverviewDockWidget *wid)
{
    this->quadrantRadialTree(classes,180);
    this->drawOverview(wid);
    wid->m_scene->connect(wid->m_scene,SIGNAL(myclick(QPointF)),this,SLOT(widSceneClicked(QPointF)));
}

void Overview::widSceneClicked(QPointF pos)
{
    cout<<"OOO-->"<<pos.rx()<<","<<pos.ry()<<endl;
}
