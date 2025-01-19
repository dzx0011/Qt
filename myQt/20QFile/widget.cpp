#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QFile>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        QString path=QFileDialog::getOpenFileName(this,"打开文件" ,"C:/Users/17677/Desktop","*.txt");
        ui->lineEdit->setText(path);//将路径放在lineedit中


        //参数是文件的路径
        //QFile默认支持的格式是utf-8
        //对于gbk格式读出的将是乱码
        QFile file(path);

        //编码格式类


        //设置打开方式
        file.open(QIODeviceBase::ReadOnly);
        //用字节数组来储存读取到的数据
        QByteArray bay=file.readAll();

        //对与gbk编码方式的使用两次转换成utf-8格式。
        QString bay1=QString::fromLocal8Bit(bay);
        QByteArray bay2=bay1.toUtf8();
        //将读取数据放置编辑框内。
        ui->textEdit->setText(bay2);
        file.close();//关闭文件




        file.open(QIODevice::Append);
        file.write(QString::fromUtf8("好好好，呃呃呃").toLocal8Bit());//默认输入的是utf8数据，所以也需要转换。
        file.close();



        //QFileInfo 文件信息类
        QFileInfo info(path);
        qDebug()<<"大小:"<<info.size()<<"后缀名"<<info.suffix();
        qDebug()<<"最后修改日期:"<<info.lastModified().toString("yyyy/mm/dd hh:mm:ss")<<"第一次创建日期"<<info.birthTime().toString("yyyy/mm/dd hh:mm:ss");
        qDebug()<<"文件路径"<<info.path();

    });


}

Widget::~Widget()
{
    delete ui;
}
