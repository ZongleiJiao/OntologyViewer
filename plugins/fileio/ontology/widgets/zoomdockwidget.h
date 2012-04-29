#ifndef ZOOMDOCKWIDGET_H
#define ZOOMDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class ZoomDockWidget;
}

class ZoomDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit ZoomDockWidget(QWidget *parent = 0);
    ~ZoomDockWidget();

private:
    Ui::ZoomDockWidget *ui;
};

#endif // ZOOMDOCKWIDGET_H
