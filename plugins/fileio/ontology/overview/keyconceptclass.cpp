#include "keyconceptclass.h"
#include <stack>

using namespace std;

KeyConceptClass::KeyConceptClass(OwlOntology *ontology)
{
    this->m_ontology = ontology;
    this->ontologyfile = m_ontology->ontologyfile;
    this->classes = m_ontology->classes;
    this->classnum = classes.size();
    for(int i=0;i<classes.size();i++)
    {
        measure mi;
        mi.idx = i;
        mi.classname = classes[i]->shortname;
//        mi.visitTimes = 1;
//        mi.lastvisitedTime = QDateTime::currentDateTime();
//        mi.score = 0;
        measures.append(mi);
    }
    this->isScoreFileChanged = false;

    ontofilename = ontologyfile->absoluteFilePath();
    scorefilename = ontofilename.left(ontofilename.length()-4)+"_score.xml";
}

KeyConceptClass::~KeyConceptClass()
{
    if(this->isScoreFileChanged)
        this->writeScoreFile();
}

//get index of classes by its shortname
int KeyConceptClass::getIndexOfClasses(QString shortname)
{
    for(int i=0;i<classes.length();i++)
    {
        if(classes[i]->shortname.toLower() == shortname.toLower()) return i;
    }
    return -1;
}

void KeyConceptClass::computeNameSimplicities()
{
    for(int i=0;i<classnum;i++)
    {
        /**
            NS(C) = 1 - c(nc-1), 0<=NS(C)<=1
            nc being the number of compounds in the label
            c is a constant — use c = 0.3.
        **/
        /**
            How to check whether it is a word?
            space? capital letter? or string length?
            Here, I use the method: check whether its shortname contains other shortnames.
            then, each time we found, NS(C)-c.
            Limitation: PizzaTopping -- VegetableTopping -- XXXTopping cannot be recognized
        **/
        double ns=1.00;
        for(int j=0;j<classnum;j++)
        {
            if(classes[i]->shortname!=classes[j]->shortname
               &&classes[i]->shortname.contains(classes[j]->shortname))
            {
                ns = ns-nameSimplicity_c;
            }
        }
        //ensure ns>=0
        if(ns<0)ns=0;
        measures[i].namesimplicity = ns;
    }
}

void KeyConceptClass::computeBasicLevels()
{
    int maxpath=0;
    for(int i=0;i<classnum;i++)
    {
        int p = computeNumberOfPath(classes[i]);
        measures[i].path=p;
        if(p>maxpath)maxpath=p;
    }
    for(int i=0;i<classnum;i++)
    {
        double bl=0.0;
        if(maxpath!=0)bl=double(measures[i].path)/double(maxpath);
        measures[i].basiclevel=bl;
    }
}

int KeyConceptClass::computeNumberOfPath(OwlClass *node)
{
    //need to dealwith circles!
    /** found how many times is this node in the middle of path.
        use superclasses number(to the Thing) multiple the leaves.
     **/
    //find leaves
    int nleaves=0;

    stack<OwlClass *> nodestack;
    for(int i=0;i<node->subclasses.size();i++)
    {
        nodestack.push(node->subclasses[i]);
    }
    while(!nodestack.empty())
    {
        OwlClass * tmpclass = nodestack.top();
        nodestack.pop();
        if(tmpclass->subclasses.size()==0)
        {
            nleaves++;
        }
        else
        {
            for(int i=0;i<tmpclass->subclasses.size();i++)
            {
                nodestack.push(tmpclass->subclasses[i]);
            }
        }
    }

//    cout<<"Leaves of <"<<node->shortname.toStdString()<<">:"<<nleaves<<endl;

    //find roots
    int nroots=0;
    for(int i=0;i<node->superclasses.size();i++)
    {
        nodestack.push(node->superclasses[i]);
    }
    while(!nodestack.empty())
    {
        OwlClass * tmpclass = nodestack.top();
        nodestack.pop();
        if(tmpclass->superclasses.size()==0)
        {
            nroots++;
        }
        else
        {
            for(int i=0;i<tmpclass->superclasses.size();i++)
            {
                nodestack.push(tmpclass->superclasses[i]);
            }
        }
    }

//    cout<<"Roots of <"<<node->shortname.toStdString()<<">:"<<nroots<<endl;
//    cout<<"Paths of <"<<node->shortname.toStdString()<<">:"<<nroots*nleaves<<endl;
    return nleaves*nroots;
}

void KeyConceptClass::computeNCValues()
{
    this->computeNameSimplicities();
    this->computeBasicLevels();
    // NCValue(c) = wBL*BL(C) + wNS*NS(C)
    for(int i=0;i<classnum;i++)
    {
        measures[i].ncvalue =
                ncvalue_wBL*measures[i].basiclevel
              + ncvalue_wNS*measures[i].namesimplicity;
    }
}

void KeyConceptClass::computeGlobalDensities()
{
    /**
      globaldensity(c) = n*subclass*wS + n*properties*wP + n*individuals*wI
        /max(global density)
      wS = 0.8, wP = 0.1, wI = 0.1.
      **/
    double maxdensity=0.0;
    for(int i=0;i<classnum;i++)
    {
        double num=0;
        num+=globaldensity_wS * classes[i]->subclasses.size();
        num+=globaldensity_wI * classes[i]->individuals.size();
        num+=globaldensity_wP * classes[i]->propertydomains.size();
        num+=globaldensity_wP * classes[i]->propertyranges.size();
        measures[i].aGlobalDensity = num;
        if(maxdensity<num)maxdensity=num;
    }
    for(int i=0;i<classnum;i++)
    {
        double gd=0.0;
        if(maxdensity!=0)gd = measures[i].aGlobalDensity/maxdensity;
        measures[i].globaldensity=gd;
    }
}

void KeyConceptClass::computeLocalDensities()
{
    /**
      localdensity(C) = globaldensity(C) /maxweightedGD(C) + wGDL*GD(C)
      **/

    for(int i=0;i<classnum;i++)
    {
        double maxWeightedGD = 0.0;
        //search k level/distance classes
        for(int j=1;j<=localdensity_k;j++){
            QList<OwlClass *> cls;
            /** modify for speed up!!! only calculate k=1 without call KDistance**/
            cls.append(classes[i]->subclasses);
            cls.append(classes[i]->subclasses);
            //calculate weightedGD
            for(int k=0;k<cls.size();k++){
                int idx = getIndexOfClasses(cls[k]->shortname);
                double wgd=0.0;
                if(idx!=-1) wgd = (1-localdensity_ratioD*j)*measures[idx].globaldensity;
                if(wgd>maxWeightedGD){
                    maxWeightedGD=wgd;
                }
            }
        }
        double ld = localdensity_wGDL * measures[i].globaldensity;
        if(maxWeightedGD!=0)ld+= measures[i].globaldensity/maxWeightedGD;
        measures[i].localdensity=ld;
    }
}

QList<OwlClass *> KeyConceptClass::getKDistanceClasses(OwlClass *node, int k, int currentdistance)
{
    /** Warn: Circle remove first! **/
    QList<OwlClass *> lists;

    if(currentdistance>k){
        return lists;
    }
    else if(currentdistance==k){
        lists.append(node->subclasses);
        lists.append(node->superclasses);
    }
    else{
        for(int i=0;i<node->subclasses.size();i++){
            QList<OwlClass *> sublists;
            sublists = getKDistanceClasses(node->subclasses[i],k,currentdistance+1);
            lists.append(sublists);
        }
        for(int i=0;i<node->superclasses.size();i++){
            QList<OwlClass *> suplists;
            suplists = getKDistanceClasses(node->superclasses[i],k,currentdistance+1);
            lists.append(suplists);
        }
    }
}

void KeyConceptClass::computeDensities()
{
    /**
        D=wLD*localdensity + wGD*globaldensity
    **/
    computeGlobalDensities();
//    computeLocalDensities();
    for(int i=0;i<classnum;i++)
    {
//        measures[i].density = density_wLD * measures[i].localdensity
//                + density_wGD * measures[i].globaldensity;
        measures[i].density = measures[i].globaldensity;
    }
}

void KeyConceptClass::computeGlobalPopularities()
{
    //compute hits
    /*
      In the paper, it uses seach engine to find the hits.
      Here, we replace the number with the times occur in classes shortnames.
      */
    int maxhit=0;
    for(int i=0;i<classnum;i++)
    {
        int hit=0;
        QString cname = classes[i]->shortname.toLower();
        for(int j=0;j<classnum;j++)
        {
            QString tname = classes[j]->shortname.toLower();
            if(tname.contains(cname))hit++;
        }
        if(hit>maxhit)maxhit=hit;
        measures[i].hit = hit;
    }

    //compute GP = hit(c)/maxhit
    for(int i=0;i<classnum;i++)
    {
        double gp = 0.0;
        if(maxhit!=0)gp=double(measures[i].hit)/double(maxhit);
        measures[i].globalpopularity = gp;
    }
}

void KeyConceptClass::computeLocalPopularities()
{
    /**
      LP(C) = GP(C) /maxweightedGP(C) + wGPL*GP(C)
      **/

    for(int i=0;i<classnum;i++)
    {
        double maxWeightedGP = 0.0;
        //search k level/distance classes
        for(int j=1;j<=localpopularity_k;j++){
            QList<OwlClass *> cls;
//            cls = getKDistanceClasses(originclasses[i],j,0);
            /** direct use level 1 classes(sub & sup) to speed up **/
            cls.append(classes[i]->subclasses);
            cls.append(classes[i]->superclasses);
            //calculate weightedGP
            for(int k=0;k<cls.size();k++){
                int idx = getIndexOfClasses(cls[k]->shortname);
                double wgp=0.0;
                if(idx!=-1) wgp = (1-localpopularity_ratioP*j)*measures[idx].globalpopularity;
                if(wgp>maxWeightedGP)maxWeightedGP=wgp;
            }
        }
        double lp = localpopularity_wGPL * measures[i].globalpopularity;
        if(maxWeightedGP!=0)lp+= measures[i].globalpopularity/maxWeightedGP;
        measures[i].localpopularity=lp;
    }
}

void KeyConceptClass::computePopularities()
{
    /** P=wLP*LP + wGP*GP **/
    cout<<"Computing GlobalPopularities..."<<endl;
//    computeGlobalPopularities();
    cout<<"Computing LocalPopularities..."<<endl;
//    computeLocalPopularities();
    for(int i=0;i<classnum;i++)
    {
//        measures[i].popularity = popularity_wLP * measures[i].localpopularity
//                + popularity_wGP * measures[i].globalpopularity;
        measures[i].popularity = measures[i].globalpopularity;
    }
}

void KeyConceptClass::computeScore()
{
    /** score = NCValue + D + P **/
    cout<<"Computing NCValues..."<<endl;
    computeNCValues();
    cout<<"Computing Densities..."<<endl;
    computeDensities();
    cout<<"Computing Popularities..."<<endl;
    computePopularities();
    for(int i=0;i<classnum;i++)
    {
        //compute score
        measures[i].score = measures[i].ncvalue + measures[i].density + measures[i].popularity;

        //init visited times & last visited time
        measures[i].visitTimes=1;
        measures[i].lastvisitedTime = QDateTime::currentDateTime();
        measures[i].landmark = 0;
    }
}


QList<OwlClass *> KeyConceptClass::getKeyClasses(int n)
{
    QList<OwlClass *> result;

    //compute scores
    computeScore();

    //n must>=1
    if(n<1) return result;

    //get n Top score classes, and other classes
    this->sortMeasuresByScore(); //sort by score

    if(n>classnum)n=classnum;
    for(int i=0;i<n;i++)result.append(classes[measures[i].idx]);

    this->writeScoreFile();

    this->readScoreFile();
    this->computeOverallScore();

    return result;
}

QList<OwlClass *> KeyConceptClass::getNKeyClasses(int n)
{
    QList<OwlClass *> result;

    int f= checkfile();
    if(f==1)
    {
        cout<<"Reading score file..."<<endl;
        this->readScoreFile();
    }
    else
    {
        cout<<"Calculate scores..."<<endl;
        computeScore();
        this->writeScoreFile();
    }

    cout<<"KC computing overall scores"<<endl;
    this->computeOverallScore();
    //top n overall score classes
    if(n>classnum)n=classnum;
    for(int i=0;i<n;i++)result<<classes[measures[i].idx];
    cout<<"KC return "<<n<<" classes."<<endl;
    return result;
}


int KeyConceptClass::checkfile()
{
    //score file not exist: -1
    //score file read error: -2
    //score file does not match: -3
    //owl file changed: 0
    //else 1;

    QFile scorefile(scorefilename);
    if (!scorefile.open(QIODevice::ReadOnly)){
        cout<<"SCORE FILE DOES NOT EXIST!"<<endl;
        return -1;
    }
    QDomDocument doc("ontologyscore");
    if(!doc.setContent(&scorefile)){
        cout<<"SCORE FILE ERROR!"<<endl;
        scorefile.close();
        return -2;
    }
    QDomElement root = doc.documentElement();
    if(root.tagName()!="OntologyScore"){
        cout<<"SCORE FILE DOES NOT MATCH!"<<endl;
        scorefile.close();
        return -3;
    }
    QFileInfo *ontof = new QFileInfo(ontofilename);
    QString mdate = root.elementsByTagName("OWLFile").at(0).toElement().attribute("LastModified");
    if(mdate != ontof->lastModified().toString())
    {
        cout<<"OWL FILE HAS BEEN CHANGED!"<<endl;
        scorefile.close();
        return 0;
    }
    scorefile.close();
    return 1;
}


void KeyConceptClass::writeScoreFile()
{
    QDomDocument doc;
    QDomProcessingInstruction instruction = doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc.appendChild(instruction);

    QDomElement root = doc.createElement("OntologyScore");
    doc.appendChild(root);

    QString owlfilename = this->ontologyfile->absoluteFilePath();
    QDomElement owlfile = doc.createElement("OWLFile");
    root.appendChild(owlfile);
    owlfile.setAttribute("Name",owlfilename);
    owlfile.setAttribute("LastModified",this->ontologyfile->lastModified().toString());
    owlfile.setAttribute("NumberOfClasses",this->classnum);

    QDomElement nodes = doc.createElement("Classes");
    root.appendChild(nodes);
    for(int i=0;i<this->classnum;i++){
        QDomElement node = doc.createElement("Class");
        node.setAttribute("Classname",classes[i]->shortname);
        node.setAttribute("Score",measures[i].score);
        node.setAttribute("VisitedTimes",measures[i].visitTimes);
        node.setAttribute("LastVisitedTime",measures[i].lastvisitedTime.toString());
        node.setAttribute("Landmark", measures[i].landmark);
        nodes.appendChild(node);
    }

    QString scorefilename = owlfilename.left(owlfilename.length()-4)+"_score.xml";
    cout<<"write score file : "<<scorefilename.toStdString()<<endl;
    QFile file(scorefilename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate |QIODevice::Text))
         return ;
    QTextStream out(&file);
    out.setCodec("UTF-8");
    doc.save(out,4,QDomNode::EncodingFromTextStream);
    file.close();
}



void KeyConceptClass::readScoreFile()
{
//    QString ontofilename = ontologyfile->absoluteFilePath();
//    QString scorefilename = ontofilename.left(ontofilename.length()-4)+"_score.xml";

    QFile scorefile(scorefilename);
    if (!scorefile.open(QIODevice::ReadOnly)){
        cout<<"SCORE FILE DOES NOT EXIST!"<<endl;
        return;
    }
    QDomDocument doc("ontologyscore");
    if(!doc.setContent(&scorefile)){
        cout<<"SCORE FILE ERROR!"<<endl;
        scorefile.close();
        return;
    }
    QDomElement root = doc.documentElement();
    if(root.tagName()!="OntologyScore"){
        cout<<"SCORE FILE DOES NOT MATCH!"<<endl;
        scorefile.close();
        return;
    }

    QDomNodeList clst = root.elementsByTagName("Classes").at(0)
                        .toElement().elementsByTagName("Class");
    for(int i =0; i<clst.count(); i++)
    {
        QDomElement n = clst.at(i).toElement();
        QString classname = n.attribute("Classname");
        QString sc = n.attribute("Score");
        QString vt = n.attribute("VisitedTimes");
        QString lv = n.attribute("LastVisitedTime");
        int idx = getIndexOfClasses(classname);
        if(idx!=-1){
            measures[idx].score = sc.toDouble();
            measures[idx].visitTimes = vt.toInt();
            measures[idx].lastvisitedTime = QDateTime::fromString(lv);
        }
//        cout<<"--R--: "<<measures[idx].classname.toStdString()
//           <<" -score "<<measures[idx].score
//           <<" -vt "   <<measures[idx].visitTimes
//           <<" -lv "   <<measures[idx].lastvisitedTime.toString().toStdString()<<endl;
    }
    scorefile.close();
}


void KeyConceptClass::computeOverallScore()
{
    /** version 1: overallscore = wSC*score + wVT* VT/MaxVT + wLV * (1-LVidx/num)
        version 2: overallscore = 100*landmark + wSC*score + wVT* VT/MaxVT + wLV * (1-LVidx/num)
        Add Landmark!!**/
    //Get maxVT
    double maxvt=1.0;
    int num = measures.size();
    for(int i=0;i<num;i++){
        if(measures[i].visitTimes>maxvt) maxvt = measures[i].visitTimes;
    }
    //sort by lastVisitedTime
    this->sortMeasuresByLastVisitedTime();

    //compute overallscore
    for(int i=0;i<num;i++)
    {
        measures[i].overallscore = 100*measures[i].landmark
                + overallscore_wSC * measures[i].score
                + overallscore_wVT * double(measures[i].visitTimes)/maxvt
                + overallscore_wLV * (1 - i/num);
    }

    this->sortMeasuresByOverallScore();
}

void KeyConceptClass::sortMeasuresByScore()
{
    for(int i=0;i<classnum-1;i++){
        int max=i;
        for(int j=i+1;j<classnum;j++){
            if(measures[j].score>measures[max].score)max=j;
        }
        if(max!=i)measures.swap(i,max);
    }
}

void KeyConceptClass::sortMeasuresByOverallScore()
{
    for(int i=0;i<classnum-1;i++){
        int max=i;
        for(int j=i+1;j<classnum;j++){
            if(measures[j].overallscore>measures[max].overallscore)max=j;
        }
        if(max!=i)measures.swap(i,max);
    }
}

void KeyConceptClass::sortMeasuresByLastVisitedTime()
{
    for(int i=0;i<classnum-1;i++){
        int max=i;
        for(int j=i+1;j<classnum;j++){
            if(measures[j].lastvisitedTime>measures[max].lastvisitedTime)max=j;
        }
        if(max!=i)measures.swap(i,max);
    }
}

void KeyConceptClass::updateClassVisitedTime(QString shortname, int inc)
{
    this->isScoreFileChanged = true;
    for(int i = 0;i<measures.size();i++){
        if(measures[i].classname.toLower()==shortname.toLower())
        {
            measures[i].visitTimes += inc;
            break;
        }
    }
}

void KeyConceptClass::updateClassLastVisitedTime(QString shortname, const QDateTime time)
{
    this->isScoreFileChanged = true;
    for(int i = 0;i<measures.size();i++){
        if(measures[i].classname.toLower()==shortname.toLower())
        {
            measures[i].lastvisitedTime = time;
            break;
        }
    }
}

void KeyConceptClass::updateClassLandmark(QString shortname, int lk)
{
    this->isScoreFileChanged = true;
    for(int i = 0;i<measures.size();i++){
        if(measures[i].classname.toLower()==shortname.toLower())
        {
            measures[i].landmark = lk;
            break;
        }
    }
}

