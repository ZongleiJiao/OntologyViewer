#include "overview.h"
#include <overviewclassshape.h>
#include <stack>
#include "plugins/fileio/ontology/overview/keyconceptclass.h"
#include <cmath>
#include "libvpsc/solve_VPSC.h"
#include "libvpsc/variable.h"
#include "libvpsc/constraint.h"

using namespace vpsc;
using namespace std;
Overview::Overview()
{
    this->numOfClasses = 300;
}

void Overview::getOverviewClasses(QList<OwlClass *> allclasses)
{
    KeyConceptClass *kc=new KeyConceptClass(allclasses);
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
        if(i%10==0){
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
    cout<<"K-centre[0]:"<<result.last()->shortname.toStdString()<<endl;
    for(int i=1;i<k;i++)
    {
        result.append(getFarthestNode(result));
        cout<<"K-centre["<<i<<"]:"<<result.last()->shortname.toStdString()<<endl;
    }

    return result;
}

OwlClass * Overview::getFarthestNode(QList<OwlClass *> nodes)
{
    int idxfstnode=-1;
    int fstdistance=0;
    for(int i=0;i<nodes.size();i++)
    {
        int idx=getIndexByShortname(classes,nodes[i]->shortname);
        for(int j=0;j<classes.size();j++)
        {
//            cout<<"D["<<idx<<"]["<<j<<"]:"<<distance[idx][j]<<" ";
            if((!nodes.contains(classes[j]))&&(distance[idx][j]>fstdistance)){
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

void Overview::localLayout(QList<OwlClass *> nodes, int k, int iteratioon)
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

        delta(k,v) Energy(k) k-neighbourhood
        deltax(k,v)
      */
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

double Overview::energy(int k)
{
    double eng=0.0;
    for(int v=0;v<classes.size();v++)
    {
        QList<OwlClass *> kneighbors = k_neighborhood(classes[v],k);
        cout<<"KN size:"<<kneighbors.size()<<endl;
        for(int u=0;u<kneighbors.size();u++)
        {
            int idxu=getIndexByShortname(classes,kneighbors[u]->shortname);
            int duv=distance[idxu][v];
            //compute (||L(u)-L(v)||-l*duv)2 / duv2
            QPointF pv = classes[v]->overviewshape->pos();
            QPointF pu = kneighbors[u]->overviewshape->pos();
            double luv=sqrt(
                        pow(pv.x()-pu.x(),2)
                       +pow(pv.y()-pu.y(),2)
                        );
            eng += pow((luv - this->SINGLE_EDGE_LENGTH * duv),2)/pow(duv,2);
            cout<<"duv:"<<duv<<" |lu-lv|:"<<luv<<" INC:"
               <<pow((luv - this->SINGLE_EDGE_LENGTH * duv),2)/pow(duv,2)
              <<" E:"<<eng<<endl;
        }
    }
    return eng;
}

double Overview::EuclideanDistance(OwlClass *u, OwlClass *v)
{

}

double Overview::deltakv(int k, OwlClass *node)
{
    //deltakv = sqrt((∂Ek/∂xv)^2+(∂Ek/∂yv)^2)
    //Ek =sum (INC) (v=0..n-1,u=0..k-1)
    //INC = (L(u,v)- l* duv)^2/duv^2
    //L(u,v)=sqrt((xu-xv)^2+(yu-yv)^2)
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

    /** test projection **/
    //projection -- dim Y
    cout<<"Doing projection..."<<endl;
    Variables vs;
    Constraints cs;
    int n = classes.size();
    vs.resize(n);
    for(int i=0;i<n;i++)
    {
        double yp = classes[i]->overviewshape->pos().y();
        vs[i]=new Variable(i,yp);
    }
    for(int i=0;i<n;i++)
    {
        QList<int> subidx;
        for(int j=0;j<classes[i]->subclasses.size();j++){
            int idx=getIndexByShortname(classes,classes[i]->subclasses[j]->shortname);
            subidx.append(idx);
            Constraint * c = new Constraint(vs[i],vs[idx],80);
            cs.push_back(c);
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
            QPointF op = classes[i]->overviewshape->pos();
            Variable * v=vs[i];
            op.setY(v->finalPosition);
            classes[i]->overviewshape->setCentrePos(op);
        }
    }

    //k = minsize
    int k=this->MIN_K;

    while(k<=classes.size())
    {
        //center=k-centers
        QList<OwlClass *> centers = k_centers(classes,k);
        //radius

        //locallayout

        //for every v in V, do L(v)=L(center(v))+rand
        for(int i=0;i<classes.size();i++)
        {
            OwlClass * ncenter = getNearestCenter(centers,classes[i]);
            cout<<"Node["<<classes[i]->shortname.toStdString()
               <<"] --> center["<<ncenter->shortname.toStdString()<<"]"<<endl;
        }
        //projection

        //k=k*radio
        k=k*this->RATIO;
    }

}
