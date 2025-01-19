#include "widget.h"
#include<QPushButton>
#include<QDebug>
#include"coins.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    coins*C1=new coins(10,this);
    QPushButton *btn1=new QPushButton("加1",this);
    QPushButton *btn2=new QPushButton("减1",this);
    this->setWindowTitle("增减硬币");
    this->resize(600,400);
    btn1->move(250,150);btn2->move(250,250);
    btn1->resize(100,40);btn2->resize(100,40);
    qDebug()<<"coins的值是";C1->showcoins();
    connect(btn1,&QPushButton::clicked,C1,&coins::addcoins);//lambda捕获的是m的副本不是m本身
    connect(btn2,&QPushButton::clicked,C1,&coins::deletecoins);
}

Widget::~Widget() {}
