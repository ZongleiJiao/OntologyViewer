#ifndef INFORMATIONBOXDOCKWIDGET_H
#define INFORMATIONBOXDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class InformationBoxDockWidget;
}

class InformationBoxDockWidget : public QDockWidget
{
    Q_OBJECT
    
public:
    explicit InformationBoxDockWidget(QWidget *parent = 0);
    ~InformationBoxDockWidget();
    
private:
    Ui::InformationBoxDockWidget *ui;
};

#endif // INFORMATIONBOXDOCKWIDGET_H
