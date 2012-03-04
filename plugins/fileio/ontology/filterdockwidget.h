#ifndef FILTERDOCKWIDGET_H
#define FILTERDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class FilterDockWidget;
}

class FilterDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit FilterDockWidget(QWidget *parent = 0);
    ~FilterDockWidget();
    
private:
    Ui::FilterDockWidget *ui;
};

#endif // FILTERDOCKWIDGET_H
