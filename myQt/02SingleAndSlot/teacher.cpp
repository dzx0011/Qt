#include "teacher.h"
#include<QDebug>
Teacher::Teacher(QObject *parent)
    : QObject{parent}
{}
void Teacher::getsignal(){
    qDebug("thats a debug");
}
void Teacher::getsignal(QString name){
    qDebug()<<"thats second debugs"<<name.toUtf8().data();
}
