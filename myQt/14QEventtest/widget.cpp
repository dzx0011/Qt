#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //第一种方式：在构造函数中启动定时器
    id1=startTimer(100);//第一个参数是间隔，单位是毫秒,每一个id与每一个starttimer对应


    //第二种方式定时器（利用类对象）
    QTimer*timer=new QTimer(this);//设置父亲
    timer->start(50);//其中一个重载，设置间隔
    connect(timer,&QTimer::timeout,this,[=](){//利用信号和槽传递
    static int num=0;
    ui->label_3->setText(QString::number(++num));
    });
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){//利用判断语句实现计时器。
        if(ui->pushButton->text()=="暂停"){
            timer->stop();
            ui->pushButton->setText("启动");
        }
        else if(ui->pushButton->text()=="启动"){
            timer->start();
            ui->pushButton->setText("暂停");
        }
    });

    //给label安装时间过滤器
    //步骤一 安装时间过滤器
    ui->label->installEventFilter(this);
    //步骤二 重写事件过滤器的事件
}
bool Widget::eventFilter(QObject*obj,QEvent*ev){
    if(obj==ui->label){//判断哪个控件使用了过滤器
        if(ev->type()==QEvent::KeyPress){
            qDebug()<<"过滤器过滤走了键盘输入";
            return true;
        }
    }
    //其他的正常返回
    return QWidget::eventFilter(obj,ev);
}
Widget::~Widget()
{
    delete ui;
}
void Widget::timerEvent(QTimerEvent*ev){
    static int num=0;
    if(ev->timerId()==id1){
        ui->label_2->setText(QString::number(++num));//将数字转换为一个字符串
    }
    if(num==30)killTimer(id1);
}
