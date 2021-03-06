#ifndef KEYCONCEPTCLASS_H
#define KEYCONCEPTCLASS_H
#include <owlontology.h>
class KeyConceptClass
{
public:
    typedef struct {
        int idx;
        QString classname;
        double overallscore;
        double score;
        //for ncvalues
        double ncvalue;
        double namesimplicity;
        double basiclevel;
        int path;
        //for densities
        double density;
        double aGlobalDensity;
        double globaldensity;
        double localdensity;
        //for popularities
        double popularity;
        int hit;
        double globalpopularity;
        double localpopularity;
        //for visiting histories
        int visitTimes;
        QDateTime lastvisitedTime;
        int landmark;
    }measure;

    QList<measure> measures;

    //init with all classes
    KeyConceptClass(OwlOntology * ontology);
    ~KeyConceptClass();
    bool isScoreFileChanged;
    int getIndexOfClasses(QString shortname);

    OwlOntology * m_ontology;
    const QFileInfo *ontologyfile;
    QString ontofilename;

    int classnum;
    QList<OwlClass *> classes;

    /** constants **/
    const static double nameSimplicity_c = 0.3;
    const static double ncvalue_wBL = 0.66;
    const static double ncvalue_wNS = 0.33;

    const static double globaldensity_wS = 0.8;
    const static double globaldensity_wP = 0.1;
    const static double globaldensity_wI = 0.1;
    const static int    localdensity_k = 1;
    const static double localdensity_ratioD = 0.1;
    const static double localdensity_wGDL = 0.5;
    const static double density_wLD = 0.32;
    const static double density_wGD = 0.08;

    const static double localpopularity_k = 1;
    const static double localpopularity_ratioP = 0.1;
    const static double localpopularity_wGPL =0.5;
    const static double popularity_wLP = 0.1;
    const static double popularity_wGP = 0.2;

//    const static double overallscore_wCO = 0.6;
//    const static double overallscore_wCR = 0.4;
    const static double overallscore_wSC = 0.5;
    const static double overallscore_wVT = 0.1;
    const static double overallscore_wLV = 0.4;


    /** functions **/
//    QList<OwlClass *> getKeyClasses(int n);
    QList<OwlClass *> getNKeyClasses(int n);

    //NCValue
    void computeNameSimplicities();
    void computeBasicLevels();
    int computeNumberOfPath(OwlClass *node);
    void computeNCValues();

    //Density
    void computeGlobalDensities();
    void computeLocalDensities();
    QList<OwlClass *> getKDistanceClasses(OwlClass * node,int k,int currentdistance=0); //get distance=k sub/sup classes
    void computeDensities();

    //Popularity
    void computeGlobalPopularities();
    void computeLocalPopularities();
    void computePopularities();

    //score
    void computeScore();

    //overallscore ---score with histories
    void computeOverallScore();
    //write to file();
    QString scorefilename;
    void writeScoreFile();
    void readScoreFile();    
    int checkfile();
    void updateClassLastVisitedTime(QString shortname,const QDateTime time);
    void updateClassVisitedTime(QString shortname,int inc);
    void updateClassLandmark(QString shortname, int lk);

    //read/write db
    int readScore_DB();
    void writeScore_DB();
    void updateClassLastVisitedTime_DB(QString shortname,const QDateTime time);
    void updateClassVisitedTime_DB(QString shortname,int inc);
    void updateClassLandmark_DB(QString shortname, int lk);

    //sort measures
    void sortMeasuresByScore();
    void sortMeasuresByLastVisitedTime();
    void sortMeasuresByOverallScore();
};

#endif // KEYCONCEPTCLASS_H
