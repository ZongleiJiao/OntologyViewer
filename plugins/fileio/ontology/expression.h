#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <QObject>
#include <owlontology.h>

class Expression : public QObject
{
    Q_OBJECT
public:
    explicit Expression(QObject *parent = 0);

    int type; //1. Expression 2. Class 3. individual 4.Property 5. data 6.Others
    OwlOntology * ownerOntology;
    QString fullexpression;
    QString symbol;
    QList<Expression *> subExpressions;

    qreal getHeight();
//    qreal getWidth();

    static Expression * getExpressionData(OwlOntology *onto, QString expStr);
    static QList<QString> splitExpressionStr(QString str);
signals:

public slots:

};

#endif // EXPRESSION_H
