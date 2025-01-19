#ifndef WIDGET_H
#define WIDGET_H
#include"teacher.h"
#include"student.h"
#include <QWidget>
#include<QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    Teacher*t;
    Student*s;
    void thesignaltisendsigal();
};
#endif // WIDGET_H
