#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent*pt){//事件会自动执行

    //实例化画家对象
    QPainter painter(this);//参数为QPaintDevice *device

    //设置画笔
    QPen pen(QColor(255,0,0));
    //设置画笔宽度
    pen.setWidth(4);
    //设置画笔风格
    pen.setStyle(Qt::DashDotDotLine);

    ////高级，设置抗锯齿
    painter.setRenderHint(QPainter::Antialiasing);

    ////高级，改变画家位置(将画家移动x，移动y)
    painter.save();//保存画家状态
    painter.translate(100,0);
    painter.restore();//还原到最近一次保存的状态

    //对于填充图形，可以使用画刷来填充
    QBrush brush(Qt::cyan);
    //画刷也有相对应的风格
    brush.setStyle(Qt::DiagCrossPattern);

    //让画家使用画刷
    painter.setBrush(brush);

    //划线
    painter.drawLine(QPoint(100,100),QPoint(300,400));
    //画椭圆和圆
    painter.drawEllipse(QPoint(100,100),100,100);

    //让画家使用画笔
    painter.setPen(pen);
    //画矩形
    painter.drawRect(QRect(QPoint(100,100),QPoint(200,400)));


    //写文字
    painter.drawText(QPoint(100,100),"好好好，好好好哦啊哦");


}
