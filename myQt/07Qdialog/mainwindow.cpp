#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QMessageBox>
#include<QColorDialog>
#include<QFileDialog>
#include<QInputDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击新建以弹出一个对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        QDialog *dlg=new QDialog(this);
        dlg->resize(200,60);
        dlg->exec();
    });
    connect(ui->actionopen,&QAction::triggered,[=](){
        QDialog *dlg1=new QDialog(this);
        dlg1->resize(200,100);
        dlg1->show();
        dlg1->setAttribute(Qt::WA_DeleteOnClose);
    });
    //question的默认参数略有不同于前两个，其他地方相同。1.父类 2.框上的文本 3.中间的文本 4.按钮的种类 5.默认按钮
    if(QMessageBox::Apply==QMessageBox::critical(this,"critical","请缴纳费用",QMessageBox::Ok|QMessageBox::Apply|QMessageBox::Close,QMessageBox::Ok)){
        qDebug()<<"缴纳中";
    }
    else{
        qDebug()<<"Warning...";
    }
    QMessageBox::information(this,"information","请缴纳费用");//后面可以填button两个参数(前两个和最后一个静态函数的默认参数列表一样)
    QMessageBox::question(this,"question","疑问？");
    QMessageBox::warning(this,"warning","警告");

    //颜色对话框
    //QColor(255,0,0)(r,g,b,透明度);
    QColor c=QColorDialog::getColor(QColor(255,0,0));//返回值是一个QColor
    qDebug()<<"r="<<c.red()<<"g'"<<c.green()<<"b="<<c.blue();

    //文档对话框（获取文档的路径）
    //QString str=QFileDialog::getOpenFileName(this,"打开文件","C:/Users/17677/Desktop","(*.txt)");
    //qDebug()<<str;//str储存的是绝对路径

    //输入对话框
    QString S=QInputDialog::getText(this,"输入文本","请输入你的生日",QLineEdit::Password,"默认文本");
}

MainWindow::~MainWindow()
{
    delete ui;
}
