#include "mywidget.h"
#include"mybotton.h""
#include<QPushButton>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton*btn1=new QPushButton;
    //btn->show();show以顶层方式方式弹出
    btn1->setParent(this);//使button成为该类的一个部件，所有Widget的派生类都可以使用这个函数
    btn1->setText("第一个按钮");


    QPushButton*btn2=new QPushButton("第二个按钮",this);
    btn2->setParent(this);
    btn2->move(100,100);//移动按钮
    btn2->resize(100,50);

    connect(btn2,SIGNAL(clicked()),this,SLOT(close()));

    myBotton*btn3=new myBotton;
    btn3->setParent(this);
    btn3->move(200,200);
    btn3->setText("第三个按钮");
    //重置窗口大小
    resize(600,400);

    //固定窗口大小
    setFixedSize(600,400);

    //设置窗口标题
    setWindowTitle("hello");



}

myWidget::~myWidget() {}
