#ifndef SEARCHDOCKWIDGET_H
#define SEARCHDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class SearchDockWidget;
}

class SearchDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit SearchDockWidget(QWidget *parent = 0);
    ~SearchDockWidget();
    
private:
    Ui::SearchDockWidget *ui;
};

#endif // SEARCHDOCKWIDGET_H
