#ifndef HISTORYDOCKWIDGET_H
#define HISTORYDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class HistoryDockWidget;
}

class HistoryDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit HistoryDockWidget(QWidget *parent = 0);
    ~HistoryDockWidget();
    
private:
    Ui::HistoryDockWidget *ui;
};

#endif // HISTORYDOCKWIDGET_H
