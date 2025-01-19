#include "widget.h"
#include "ui_widget.h"
#include<QMovie>
#include<QTimer>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置默认页面
    ui->stackedWidget->setCurrentIndex(0);
    //建立按钮和界面的链接
    connect(ui->pushButtontext1,&QPushButton::clicked,ui->stackedWidget,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pushButtontext2,&QPushButton::clicked,ui->stackedWidget,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });



    //comboboxc操作
    QStringList list;
    list<<"北京"<<"上海"<<"青岛"<<"成都";
    ui->comboBox->addItems(list);
    connect(ui->pushButtoncomeback,&QPushButton::clicked,ui->comboBox,[=](){ui->comboBox->setCurrentIndex(2);});

    //使用label输出图片操作
    ui->labelpic1->setPixmap(QPixmap(":/new/1/p2.png"));
    ui->labelpic1->setScaledContents(true);

    //使用label进行输出gif
    QMovie*mov=new QMovie(":/new/1/th_pig.gif");
    ui->labelgif->setMovie(mov);
    ui->labelgif->setScaledContents(true);
    //播放动图
    mov->start();

}

Widget::~Widget()
{
    delete ui;
}
