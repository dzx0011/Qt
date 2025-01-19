#include "widget.h"
#include "ui_widget.h"
#include<QListWidgetItem>//控制控件中

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置男默认
    ui->radioButtonman->setChecked(true);


    //容器操作法一
    QString test="嗯嗯你说的对";
    QListWidgetItem* item1=new QListWidgetItem(test);
    QListWidgetItem*item2=new QListWidgetItem("呃呃，没绷住");
    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    for(int i=0;i<ui->listWidget->count();i++){//使用for循环使每一行居中
        QListWidgetItem*item=ui->listWidget->item(i);
        item->setTextAlignment(Qt::AlignCenter);
    }
    //法二(没法设置对齐方式)
    QStringList list;
    list<<"emm呃呃呃"<<"没话说了";
    ui->listWidget->addItems(list);
}

Widget::~Widget()
{
    delete ui;
}
