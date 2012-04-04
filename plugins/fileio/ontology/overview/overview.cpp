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

using namespace dunnart;
using namespace vpsc;
using namespace std;
Overview::Overview()
{
    this->numOfClasses = 300;
}

void Overview::getOverviewClasses(QList<OwlClass *> allclasses,QString ontoname)
{
    KeyConceptClass *kc=new KeyConceptClass(allclasses,ontoname);
    classes = convertOverviewShapes(kc->getKeyClasses(this->numOfClasses));
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
    int x = 0;
    int y = -50;
    for(int i=0;i<classes.size();i++){
        if(i%5==0){
            x=0;
            y+=50;
        }
        classes[i]->overviewshape->setPosAndSize(QPointF(x,y),QSizeF(5,5));
        classes[i]->overviewshape->setStatus(OverviewClassShape::STATUS_OutDetailview);
        x+=50;
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
    cout<<"---------- Distances ----------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"["<<i<<"] "<<classes[i]->shortname.toStdString()<<"\t";
        for(int j=0;j<n;j++)
        {
            cout<<distance[i][j]<<"\t";
        }
        cout<<endl;
    }
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
        double ex = Ex(graph,graph[idx]);
        double ey = Ey(graph,graph[idx]);
        double ex2 = Ex2(graph,graph[idx]);
        double exy = Exy(graph,graph[idx]);
        double ey2 = Ey2(graph,graph[idx]);
        double dmx = deltaMx(ex,ey,ex2,exy,ey2);
        double dmy = deltaMy(ex,ey,ex2,exy,ey2);
        qreal newposx = graph[idx]->overviewshape->pos().rx() + dmx;
        qreal newposy = graph[idx]->overviewshape->pos().ry() + dmy;
        graph[idx]->overviewshape->setCentrePos(QPointF(newposx,newposy));
    }
}

int Overview::getIndexOfMaxDeltaM(QList<OwlClass *> graph)
{
    double max=0.0;
    int maxidx = -1;
    for(int i=0;i<graph.size();i++)
    {
        double ex = Ex(graph,graph[i]);
        double ey = Ey(graph,graph[i]);
        double tmp = deltaM(ex,ey);
        if(max<tmp){
            max=tmp;
            maxidx=i;
        }
    }
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

double Overview::Ex(QList<OwlClass *> graph, OwlClass *node)
{
    double rs = 0.0;
    int idxnode = getIndexByShortname(classes,node->shortname);
    double xnode = node->overviewshape->pos().rx();
    for(int i=0;i<graph.size();i++){
        if(graph[i]!=node){
            double kij = 1/(distance[i][idxnode] * distance[i][idxnode]);
            double lij = this->SINGLE_EDGE_LENGTH * distance[i][idxnode];
            double xi = graph[i]->overviewshape->pos().rx();
            rs += kij*(xnode-xi)*(1-lij/EuclideanDistance(graph[i],node));
        }
    }
    return rs;
}
double Overview::Ey(QList<OwlClass *> graph, OwlClass *node)
{
    double rs = 0.0;
    int idxnode = getIndexByShortname(classes,node->shortname);
    double ynode = node->overviewshape->pos().ry();
    for(int i=0;i<graph.size();i++){
        if(graph[i]!=node){
            double kij = 1/(distance[i][idxnode] * distance[i][idxnode]);
            double lij = this->SINGLE_EDGE_LENGTH * distance[i][idxnode];
            double yi = graph[i]->overviewshape->pos().ry();
            rs += kij*(ynode-yi)*(1-lij/EuclideanDistance(graph[i],node));
        }
    }
    return rs;
}

double Overview::Ex2(QList<OwlClass *> graph, OwlClass *node)
{
    double rs = 0.0;
    int idxnode = getIndexByShortname(classes,node->shortname);
    double ynode = node->overviewshape->pos().ry();
    for(int i=0;i<graph.size();i++){
        if(graph[i]!=node){
            double kij = 1/(distance[i][idxnode] * distance[i][idxnode]);
            double lij = this->SINGLE_EDGE_LENGTH * distance[i][idxnode];
            double yi = graph[i]->overviewshape->pos().ry();
            double ed = EuclideanDistance(graph[i],node);
            double ed3= ed*ed*ed;
            rs += kij*(1-(lij*(ynode-yi)*(ynode-yi))/ed3);
        }
    }
    return rs;
}

double Overview::Exy(QList<OwlClass *> graph, OwlClass *node)
{
    double rs = 0.0;
    int idxnode = getIndexByShortname(classes,node->shortname);
    double ynode = node->overviewshape->pos().ry();
    double xnode = node->overviewshape->pos().rx();
    for(int i=0;i<graph.size();i++){
        if(graph[i]!=node){
            double kij = 1/(distance[i][idxnode] * distance[i][idxnode]);
            double lij = this->SINGLE_EDGE_LENGTH * distance[i][idxnode];
            double yi = graph[i]->overviewshape->pos().ry();
            double xi = graph[i]->overviewshape->pos().rx();
            double ed = EuclideanDistance(graph[i],node);
            double ed3= ed*ed*ed;
            rs += kij * lij * (xnode - xi) * (ynode - yi) /ed3 ;
        }
    }
    return rs;
}

double Overview::Ey2(QList<OwlClass *> graph, OwlClass *node)
{
    double rs = 0.0;
    int idxnode = getIndexByShortname(classes,node->shortname);
    double xnode = node->overviewshape->pos().rx();
    for(int i=0;i<graph.size();i++){
        if(graph[i]!=node){
            double kij = 1/(distance[i][idxnode] * distance[i][idxnode]);
            double lij = this->SINGLE_EDGE_LENGTH * distance[i][idxnode];
            double xi = graph[i]->overviewshape->pos().rx();
            double ed = EuclideanDistance(graph[i],node);
            double ed3= ed*ed*ed;
            rs += kij*(1-(lij*(xnode-xi)*(xnode-xi))/ed3);
        }
    }
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
    /** test projection **/
//    //projection -- dim Y
//    cout<<"Doing projection..."<<endl;
//    Variables vs;
//    Constraints cs;
//    int n = classes.size();
//    vs.resize(n);
//    for(int i=0;i<n;i++)
//    {
//        double yp = classes[i]->overviewshape->pos().y();
//        vs[i]=new Variable(i,yp);
//    }
//    for(int i=0;i<n;i++)
//    {
//        QList<int> subidx;
//        for(int j=0;j<classes[i]->subclasses.size();j++){
//            int idx=getIndexByShortname(classes,classes[i]->subclasses[j]->shortname);
//            subidx.append(idx);
//            Constraint * c = new Constraint(vs[i],vs[idx],80);
//            cs.push_back(c);
//        }
//        for(int j=0;j<subidx.size()-1;j++)
//        {
//            Constraint * c = new Constraint(vs[subidx[j]],vs[subidx[j+1]],0,false);
//            cs.push_back(c);
//        }
//    }


//    vpsc::Solver * vpsc_solver = new Solver(vs,cs);
//    bool rs = vpsc_solver->solve();
//    if(rs){
//        cout<<"Y projection OK!"<<endl;
//        for(int i=0;i<n;i++){
//            QPointF op = classes[i]->overviewshape->pos();
//            Variable * v=vs[i];
//            op.setY(v->finalPosition);
//            classes[i]->overviewshape->setCentrePos(op);
//        }
//    }
    cout<<"Doing projection..."<<endl;
    Variables vs;
    Constraints cs;
    int n = graph.size();
    vs.resize(n);
    for(int i=0;i<n;i++)
    {
        double yp = graph[i]->overviewshape->pos().y();
        vs[i]=new Variable(i,yp);
    }
    for(int i=0;i<n;i++)
    {
        QList<int> subidx;
        for(int j=0;j<graph[i]->subclasses.size();j++){
            int idx=getIndexByShortname(graph,graph[i]->subclasses[j]->shortname);
            if(idx!=-1)
            {
                subidx.append(idx);
                Constraint * c = new Constraint(vs[i],vs[idx],this->SINGLE_EDGE_LENGTH);
                cs.push_back(c);
            }
        }
        for(int j=0;j<subidx.size()-1;j++)
        {
            Constraint * c = new Constraint(vs[subidx[j]],vs[subidx[j+1]],0,false);
            cs.push_back(c);
        }
    }


    vpsc::Solver * vpsc_solver = new Solver(vs,cs);
    bool rs = vpsc_solver->solve();
    if(rs){
        cout<<"Y projection OK!"<<endl;
        for(int i=0;i<n;i++){
            QPointF op = graph[i]->overviewshape->pos();
            Variable * v=vs[i];
            op.setY(v->finalPosition);
            graph[i]->overviewshape->setCentrePos(op);
        }
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
    //init layout
    this->setInitialLayout();

    //draw
    this->drawOverview(canvas);

    //compute all distances
    computeShortestPath();
    //k = minsize
//    int k=this->MIN_K;

//    while(k<=classes.size())
//    {
//        //center=k-centers
//        QList<OwlClass *> centers = k_centers(classes,k);
//        //radius
//        int radius =this->RATIO;
//        //locallayout
//        this->localLayout(centers,radius,this->ITERATIONS);

//        //for every v in V, do L(v)=L(center(v))+rand
//        for(int i=0;i<classes.size();i++)
//        {
//            OwlClass * ncenter = getNearestCenter(centers,classes[i]);
////            cout<<"Node["<<classes[i]->shortname.toStdString()
////               <<"] --> center["<<ncenter->shortname.toStdString()<<"]"<<endl;
//            if(ncenter!=classes[i]){
//                qreal cx = ncenter->overviewshape->pos().rx();
//                qreal cy = ncenter->overviewshape->pos().ry();
//                qreal nx = cx + ((i*2)/classes.size())*this->SINGLE_EDGE_LENGTH;
//                qreal ny = cy + this->SINGLE_EDGE_LENGTH;
//                classes[i]->overviewshape->setCentrePos(QPointF(nx,ny));
//            }
//        }
//        //projection
//        this->projection(classes);
//        //k=k*radio
//        k=k*this->RATIO;
//    }
    this->localLayout(classes,10,4);
    this->projection(classes);
}
