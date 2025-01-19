#include "widget.h"
#include "ui_widget.h"
#include<QPicture>
#include<QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPicture pic;
    QPainter painter;
    painter.begin(&pic);  //考试往pic上画
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150),100,100);
    painter.end();   //终止往pic画

    pic.save("C:/Users/17677/Desktop/img.xz");//可以自己选择后缀名

}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent*ev){
    QPainter painter(this);
    QPicture pic;
    pic.load("C:/Users/17677/Desktop/img.xz");
    painter.drawPicture(0,0,pic);

}
