#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    //重写定时器的事件
    void timerEvent(QTimerEvent*ev);
    //第一种方式定时器
    int id1;

    bool eventFilter(QObject*,QEvent*);


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
