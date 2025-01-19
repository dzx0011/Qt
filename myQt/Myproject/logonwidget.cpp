#include "logonwidget.h"
#include "ui_logonwidget.h"
#include<mainwindow.h>
#include<QPushButton>
#include<QFile>
#include<QMessageBox>
#include<QTimer>
#include"memberwindow.h"
#include"member.h"
LogOnWidget::LogOnWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogOnWidget)
{
    ui->setupUi(this);
    QFont font1("华文琥珀",15);
    ui->label->setFont(font1);
    QFont font2("仿宋",15);
    QFont font3("宋体",13);
    QFont font4("黑体",10);
    ui->choicewidget->setFont(font2);
    ui->labelname->setFont(font3);ui->labelkey->setFont(font3);
    ui->lineEditname->setFont(font4); ui->lineEditkey->setFont(font4);
    // 设置 QLabel 的样式表，修改文字颜色
    ui->label->setStyleSheet("color: white;");
    ui->stackedWidget->setCurrentIndex(0);
    maWin->hide();
    meWin->hide();


    //page1：
    //设置radiobutton默认选项
    ui->radioButton_2->setChecked(true);

    //换页继续操作()后续需要将不同身份带入不同的登入界面。
    connect(ui->toolButtongoon,&QPushButton::clicked,this,[=](){
        if(ui->radioButton->isChecked()==1){
            AccountState=0;
            ui->stackedWidget->setCurrentIndex(1);
        }
        else {
            AccountState=1;
            ui->stackedWidget->setCurrentIndex(2);
        }

    });
    //隐藏系列操作
    connect(this,&LogOnWidget::mainwindowhide,this,[=](){
        ui->lineEditkey->clear();ui->lineEditname->clear();
        ui->stackedWidget->setCurrentIndex(0);
    });

    //点击退出，结束窗口
    connect(ui->toolButtonback, &QPushButton::clicked, this, [=]() {
        emit closeButtonClicked();//点击后发送信号
    });



    //page2

    //返回按键
    connect(ui->pushButtonback,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pushButtonback_2,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    //判断是否能够登录？继续按键
    connect(ui->pushButtongoon,&QPushButton::clicked,this,[=](){
        QFile file;
        file.setFileName("./admin.txt");
        file.open(QIODevice::ReadOnly);
        QByteArray barrAccout,barrKey;
        while(!file.atEnd()){
            //创建临时变量储存该行的信息
            QByteArray temp=file.readLine().trimmed();
            barrAccout=temp.split(' ')[0];//依照' '分成两部分，如果两部分都匹配则返回true
            barrKey=temp.split(' ')[1];
            if(ui->lineEditname->text()==QString(barrAccout)&&ui->lineEditkey->text()==QString(barrKey)){
                //通过创建新对象来实例化新窗口。
                QTimer::singleShot(100,this,[=](){
                    emit mainwindowhide();
                    maWin->show();
                });
                return;
            }
        };
        //登入失败清空用户名，密码栏
        if(!ui->lineEditkey->text().isEmpty()&&!ui->lineEditname->text().isEmpty()){
            QMessageBox::information(this,"登入失败","账户或密码错误");
            ui->lineEditkey->clear();ui->lineEditname->clear();
            return;
        }
        if(ui->lineEditname->text().isEmpty()){
            QMessageBox::information(this,"登入失败","请输入用户名");
            return;
        }
        if(ui->lineEditkey->text().isEmpty())QMessageBox::information(this,"登入失败","请输入密码");
    });
    connect(ui->pushButtongoon_2,&QPushButton::clicked,this,[=](){
        QFile file;
        file.setFileName("./users.txt");
        file.open(QIODevice::ReadOnly);
        QByteArray barrName,barrAccout,barrKey;
        while(!file.atEnd()){
            //创建临时变量储存该行的信息
            QByteArray temp=file.readLine().trimmed();
            barrName=temp.split(' ')[0];//依照' '分成两部分，如果两部分都匹配则返回true
            barrAccout=temp.split(' ')[1];
            barrKey=temp.split(' ')[2];
            if(ui->lineEditname_2->text()==QString(barrName)&&ui->lineEditkey_2->text()==QString(barrKey)&&ui->lineEditAccount->text()==QString(barrAccout)){
                //通过创建新对象来实例化新窗口。
                Member::NowLogonName=ui->lineEditname_2->text();
                QTimer::singleShot(100,this,[=](){
                    emit mainwindowhide();
                    meWin->show();
                });
                return;
            }
        };
        //登入失败清空用户名，密码栏
        if(!ui->lineEditkey_2->text().isEmpty()&&!ui->lineEditname_2->text().isEmpty()&&!ui->lineEditAccount->text().isEmpty()){
            QMessageBox::information(this,"登入失败","姓名，账户，密码不匹配");
            ui->lineEditkey_2->clear();ui->lineEditname_2->clear();;ui->lineEditAccount->clear();
            return;
        }
        if(ui->lineEditname_2->text().isEmpty()){
            QMessageBox::information(this,"登入失败","账号为空");
            return;
        }
        if(ui->lineEditkey_2->text().isEmpty()){
            QMessageBox::information(this,"登入失败","密码为空");
            return;
        }
        if(ui->lineEditAccount->text().isEmpty()){
            QMessageBox::information(this,"登入失败","用户名为空");
        }
    });



    //按下，释放就改变模式。
    connect(ui->toolButtoneye,&QPushButton::pressed,this,[=](){
        ui->lineEditkey->setEchoMode(QLineEdit::Normal);
    });
    connect(ui->toolButtoneye,&QPushButton::released,this,[=](){
        ui->lineEditkey->setEchoMode(QLineEdit::Password);
    });
    connect(ui->toolButtoneye_2,&QPushButton::pressed,this,[=](){
        ui->lineEditkey_2->setEchoMode(QLineEdit::Normal);
    });
    connect(ui->toolButtoneye_2,&QPushButton::released,this,[=](){
        ui->lineEditkey_2->setEchoMode(QLineEdit::Password);
    });

}

LogOnWidget::~LogOnWidget()
{
    delete ui;
}

bool AccountState(bool num){
    return num;
}






