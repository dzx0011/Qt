#ifndef LOGONWIDGET_H
#define LOGONWIDGET_H
#include<QMouseEvent>
#include <QWidget>
#include"managerwindow.h"
#include"memberwindow.h"

namespace Ui {
class LogOnWidget;
}

class LogOnWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LogOnWidget(QWidget *parent = nullptr);
    ~LogOnWidget();

    //状态，1为成员，0为管理员
    bool AccountState=1;
    ManagerWindow *maWin=new ManagerWindow;
    MemberWindow *meWin=new MemberWindow;



signals:
    void closeButtonClicked();//按下退出按键信号
    void mainwindowhide();



private:
    Ui::LogOnWidget *ui;
};

#endif // LOGONWIDGET_H
