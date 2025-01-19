#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

//可以写在全局或者public下,需要声明也需要实现
//可以有参数，可以发生重载
    void getsignal();
    void getsignal(QString name);
signals:
};

#endif // TEACHER_H
