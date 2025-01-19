#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置列数
    ui->tableWidget->setColumnCount(3);
    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"年龄"<<"ID");
    ui->tableWidget->setRowCount(5);
    QStringList namelist,agelist;
    namelist<<"张三"<<"李四"<<"王五"<<"张娟"<<"小宝";
    agelist<<"19"<<"20"<<"30"<<"20"<<"13";
    QList<QString> IDlist;
    IDlist<<"10000"<<"10001"<<"10003"<<"10005"<<"10029";

    for(int i=0;i<5;i++){
        int j=0;
        ui->tableWidget->setItem(i,j++,new QTableWidgetItem(namelist[i]));
        ui->tableWidget->setItem(i,j++,new QTableWidgetItem(agelist[i]));
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(IDlist[i]));//也可以使用List.at()来获得
    }

}

Widget::~Widget()
{
    delete ui;
}
