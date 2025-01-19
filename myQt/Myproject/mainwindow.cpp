#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include"logonwidget.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口名称
    setWindowTitle("山东大学青岛校区餐厅反馈系统");

    //设置将子控件的信号与关闭信号连接
    connect(ui->widget,&LogOnWidget::closeButtonClicked,this,&QMainWindow::close);
    connect(ui->widget->meWin,&MemberWindow::closeButtonClicked,this,&QMainWindow::close);
    connect(ui->widget,&LogOnWidget::mainwindowhide,this,&QMainWindow::hide);
    connect(ui->widget->maWin,&ManagerWindow::mainwindowshow,this,[=](){
        this->show();
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

//重写paintevent函数
void MainWindow::paintEvent(QPaintEvent*pt){
    QPainter painter(this);
    QPen pen(Qt::white);
    QPixmap pixmap(":/menu/menupic.jpg");
    QFont font("华文彩云",40);
    painter.setFont(font);
    painter.setPen(pen);
    painter.drawPixmap(this->rect(),pixmap);
    painter.drawText(QRect(250,120,490,200),"饕  在  山  青");


}
