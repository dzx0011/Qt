#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    t=new Teacher(this);//直接在创建对象时setparent
    s=new Student(this);

    void(Student:: *stsignal)(QString)=&Student::sendsignal;
    void(Teacher:: *teaslot)(QString)=&Teacher::getsignal;
    connect(s,stsignal,t,teaslot);
    //thesignaltisendsigal();


    QPushButton *btn=new QPushButton("发送信号",this);
    this->resize(600,400);
    connect(btn,&QPushButton::clicked,this,[=](){this->setWindowTitle("哈哈我变了");btn->setText("哈哈我也变了");s->sendsignal("heloo");});//信号触发槽函数
    //第四个是lambda表达式，第三个如果是this可以省略
    //信号的参数可以传递到槽，二者直接的流动性体现出来

}

Widget::~Widget() {}


void Widget::thesignaltisendsigal(){
    emit s->sendsignal("emmm...");
}
