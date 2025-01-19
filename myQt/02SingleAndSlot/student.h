#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:
    //自定义信号写到signal下
    //返回值是void，只需要声明，不需要实现
    //可以有参数，可以重载
    void sendsignal();
    void sendsignal(QString name);

};

#endif // STUDENT_H
