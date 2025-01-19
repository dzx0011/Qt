#include "mywidget.h"
#include<QPushButton>

mywidget::mywidget(QWidget *parent)
    : QWidget{parent},button(new QPushButton("open",this)),window(new QWidget(this))//使用mywidget导致无限递归
{
    window->hide();
    window->resize(300,200);window->setWindowTitle("新界面");
    window->setWindowFlags(Qt::Window); // 设置窗口标志为独立窗口
    this->resize(600,400);this->setWindowTitle("原始界面");
    button->resize(100,80);button->move(250,160);
    connect(button,&QPushButton::clicked,[=](){ChangeStage();});



}

void mywidget::ChangeStage(){
    if (window->isVisible()) {
        // 如果窗口是可见的，则隐藏它，并将按钮文本改为"Open"
        window->hide();
        button->setText("Open");
    } else {
        // 如果窗口是隐藏的，则显示它，并将按钮文本改为"Close"
        window->show();
        button->setText("Close");
    }
}

