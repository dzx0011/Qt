#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //实现卷图操作。
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        posRT+=20;
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent*ev){
    //画家还可以画出图片
    if(posRT>this->width()+400){
        posRT=0;
    }
    QPainter painter(this);

    //设置size
    QSize size(400,200);
    QPixmap pixmap(":/mypicture/p1.png");

    //将pixmap设置为size大小
    pixmap = pixmap.scaled(size, Qt::KeepAspectRatio);

    painter.drawPixmap(QPoint(posRT-400,0),pixmap);//后面rect参数是显示图片的哪一个部分会被画入。



}
