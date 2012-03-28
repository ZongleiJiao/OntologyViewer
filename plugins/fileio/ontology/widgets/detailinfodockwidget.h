#ifndef DETAILINFODOCKWIDGET_H
#define DETAILINFODOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class DetailInfoDockWidget;
}

class DetailInfoDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit DetailInfoDockWidget(QWidget *parent = 0);
    ~DetailInfoDockWidget();
    
private:
    Ui::DetailInfoDockWidget *ui;
};

#endif // DETAILINFODOCKWIDGET_H
