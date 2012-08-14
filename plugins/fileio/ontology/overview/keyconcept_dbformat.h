#ifndef KEYCONCEPT_DBFORMAT_H
#define KEYCONCEPT_DBFORMAT_H
#include <QDateTime>
class KeyConcept_DBFormat
{
public:
    KeyConcept_DBFormat();
    int ontoID;
    int classID;
    QString classname;
    double score;
    QDateTime lastVisitedTime;
    int numberOfVisits;
    int landmark;
};

#endif // KEYCONCEPT_DBFORMAT_H
