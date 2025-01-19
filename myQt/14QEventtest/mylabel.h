#ifndef MYLABEL_H
#define MYLABEL_H
#include<QMouseEvent>
#include <QLabel>

class MyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = nullptr);
    void enterEvent(QEnterEvent *event);

    void leaveEvent(QEvent *event);

    void mousePressEvent(QMouseEvent*ev);

    void mouseReleaseEvent(QMouseEvent*ev);

    void mouseMoveEvent(QMouseEvent*ev);

    //通过event事件分发器进行拦截操作
    bool event(QEvent*ev);
signals:
};

#endif // MYLABEL_H
