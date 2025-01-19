#include "widget.h"
#include "ui_widget.h"
#include<QImage>
#include<QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QImage img(300,300,QImage::Format_RGB32);
    img.fill(Qt::white);

    QPainter painter(&img);
    painter.setPen((QPen(Qt::black)));
    painter.drawRect(100,100,100,100);

    img.save("C:/Users/17677/Desktop/img.png");

}

Widget::~Widget()
{
    delete ui;
}



void Widget::paintEvent(QPaintEvent*){
    QPainter painter(this);

    //利用QImage对像素进行修改
    QImage img;
    img.load(":/pic/p1.png");


    //修改像素点(可以对像素点进行修改)
    for(int i=50;i<100;i++){
        for(int j=50;j<100;j++){
            QRgb value=qRgb(255,0,0);
            img.setPixel(i,j,value);
        }
    }
    painter.drawImage(0,0,img);
}
