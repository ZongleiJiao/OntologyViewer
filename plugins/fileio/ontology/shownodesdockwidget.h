#ifndef SHOWNODESDOCKWIDGET_H
#define SHOWNODESDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class ShowNodesDockWidget;
}

class ShowNodesDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit ShowNodesDockWidget(QWidget *parent = 0);
    ~ShowNodesDockWidget();
    
private:
    Ui::ShowNodesDockWidget *ui;
};

#endif // SHOWNODESDOCKWIDGET_H
