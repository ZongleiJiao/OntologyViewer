#ifndef HISTORYDOCKWIDGET_H
#define HISTORYDOCKWIDGET_H

#include <QDockWidget>
#include <overview/detailedview.h>

namespace Ui {
class HistoryDockWidget;
}

class DetailedView;
class QListWidgetItem;

class HistoryDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    DetailedView* detailedview;
    QList<QListWidgetItem *> items;

    void setOntology(DetailedView* detailedview);


    explicit HistoryDockWidget(QWidget *parent = 0);
    ~HistoryDockWidget();
    
private:
    Ui::HistoryDockWidget *ui;

public slots:
    void saveInterest(QString name);
    void selectedItem(QListWidgetItem* item);
    void loadInterests();
};

#endif // HISTORYDOCKWIDGET_H
