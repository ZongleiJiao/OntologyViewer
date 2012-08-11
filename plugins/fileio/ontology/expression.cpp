#include "expression.h"

Expression::Expression(QObject *parent) :
    QObject(parent)
{

}

qreal Expression::getHeight()
{
    qreal h = 20.0;
    for(int i=0;i<subExpressions.size();i++){
        h+=subExpressions[i]->getHeight()+10;
    }
    return h;
}

Expression * Expression::getExpressionData(OwlOntology *onto, QString expStr)
{
    Expression * exp = new Expression();
    exp->ownerOntology = onto;
    exp->fullexpression = expStr;
    exp->symbol = "";

    int startpos=0;

    if(expStr.startsWith("Object"))
    {
        startpos=6;
        exp->symbol += "Object";
    }
    else if(expStr.startsWith("Data"))
    {
        startpos=4;
        exp->symbol += "Data";
    }
    else
    {
        startpos=0;
    }

    QString str = expStr.right(expStr.length()-startpos);

    //ObjectIntersectionOf(<Student> ObjectAllValuesFrom(<hasChildren> <Female>) ObjectHasValue(<hasGender> <male>) ObjectExactCardinality(3 <hasChildren> Thing))
    //1. Expression 2. Class 3. individual 4.Property 5. Others
    //<> element
    if (str.startsWith("<"))
    {
        QString sname = str.mid(1,str.length()-2);
        int idx = exp->ownerOntology->getIndexOfClasses(sname);
        if(idx!=-1) exp->type = 2;
        else{
            idx = exp->ownerOntology->getIndexOfIndividuals(sname);
            if(idx!=-1) exp->type = 3;
            else{
                idx = exp->ownerOntology->getIndexOfProperties(sname);
                if(idx!=-1) exp->type = 4;
                else exp->type = 5;
            }
        }
        exp->symbol = str;
    }
    //Syntax--both data and object
    else if (str.startsWith("OneOf"))
    {
        QString fstr = str.mid(6, str.length() - 7);
        QList<QString> substrs = splitExpressionStr(fstr);
        exp->type = 1;
        exp->symbol +="OneOf";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("IntersectionOf"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitExpressionStr(fstr);
        exp->type = 1;
        exp->symbol +="IntersectionOf (AND)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("UnionOf"))
    {
        QString fstr = str.mid(8, str.length() - 9);
        QList<QString> substrs = splitExpressionStr(fstr);
        exp->type = 1;
        exp->symbol +="UnionOf (OR)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("ComplementOf"))
    {
        /** Need to be verified!! **/
        QString fstr = str.mid(13, str.length() - 14);
        QList<QString> substrs = splitExpressionStr(fstr);
        exp->type = 1;
        exp->symbol +="ComplementOf (NOT)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("AllValuesFrom"))
    {
        QString fstr = str.mid(14, str.length() - 15);
        QList<QString> substrs = splitExpressionStr(fstr);
//        r = "(" + getFormula(substrs.at(0)) +" "+marker+"ONLY " + getFormula(substrs.at(1)) +")";
        exp->type = 1;
        exp->symbol +="AllValuesFrom (ONLY)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("SomeValuesFrom"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitExpressionStr(fstr);
//        r = "(" + getFormula(substrs.at(0)) + " "+marker+"SOME " + getFormula(substrs.at(1)) +")";
        exp->type = 1;
        exp->symbol +="SomeValuesFrom (SOME)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("HasValue"))
    {
        QString fstr = str.mid(9, str.length() - 10);
        QList<QString> substrs = splitExpressionStr(fstr);
//        r = "(" + getFormula(substrs.at(0)) + " "+marker+"VALUE " + getFormula(substrs.at(1)) +")";
        exp->type = 1;
        exp->symbol +="HasValue (VALUE)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("ExactCardinality"))
    {
        QString fstr = str.mid(17, str.length() - 18);
        QList<QString> substrs = splitExpressionStr(fstr);
//        r = "(" + getFormula(substrs.at(1))+" "+marker+"EXACTLY " +getFormula(substrs.at(0)) + getFormula(substrs.at(2)) +")";
        exp->type = 1;
        exp->symbol +="ExactCardinality (EXACTLY)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("MinCardinality"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitExpressionStr(fstr);
//        r = "(" + getFormula(substrs.at(1))+" "+marker+"MIN " +getFormula(substrs.at(0)) + getFormula(substrs.at(2)) +")";
        exp->type = 1;
        exp->symbol +="MinCardinality (MIN)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    else if (str.startsWith("MaxCardinality"))
    {
        QString fstr = str.mid(15, str.length() - 16);
        QList<QString> substrs = splitExpressionStr(fstr);
//        r = "(" + getFormula(substrs.at(1))+" "+marker+"MAX " +getFormula(substrs.at(0)) + getFormula(substrs.at(2)) +")";
        exp->type = 1;
        exp->symbol +="MaxCardinality (MAX)";
        for(int i=0;i<substrs.size();i++){
            exp->subExpressions.append(getExpressionData(exp->ownerOntology,substrs[i]));
        }
    }

    //others
    else {        
        QString sname = str;
        int idx = exp->ownerOntology->getIndexOfClasses(sname);
        if(idx!=-1) exp->type = 2;
        else{
            idx = exp->ownerOntology->getIndexOfIndividuals(sname);
            if(idx!=-1) exp->type = 3;
            else{
                idx = exp->ownerOntology->getIndexOfProperties(sname);
                if(idx!=-1) exp->type = 4;
                else exp->type = 5;
            }
        }
        exp->symbol = str;
    }
    return exp;
}

QList<QString> Expression::splitExpressionStr(QString str)
{
    QList<QString> res;
    int s = 0;
    int e;
    int count = -1;
    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == '(' || str.at(i) == '<') {
            if (count == -1) {
                count = 1;
            } else {
                count++;
            }
        }
        if (str.at(i) == ')' || str.at(i) == '>') {
            count--;
        }

        if ((str.at(i) == ' ' || i == str.length() - 1) && count == -1) {
            e = i + 1;
            if (s != e && str.at(s) != ' ') {
                QString tmp = str.mid(s, e-s).trimmed();
                res.append(tmp);
            }

            s = i + 1;
        }
        if (count == 0) {
            e = i + 1;
            QString tmp = str.mid(s, e-s).trimmed();
            res.append(tmp);
            s = i + 1;
            count = -1;
        }
    }
    return res;
}
