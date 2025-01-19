#include "widget.h"
#include "ui_widget.h"
#include<QPixmap>
#include<QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建绘图设备
    QPixmap pix(500,500);

    //填充颜色
    pix.fill(Qt::blue);

    //声明画家
    QPainter painter(&pix);
    painter.setPen(QColor(Qt::green));
    painter.drawEllipse(QRect(100,100,200,200));

    //将画布上的图像保存
    pix.save("C:/Users/17677/Desktop/pic.png");
}

Widget::~Widget()
{
    delete ui;
}
