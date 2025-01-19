#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButtonset50,&QPushButton::clicked,[=](){ui->widget->setnum(50);});
    connect(ui->pushButtonset80,&QPushButton::clicked,[=](){ui->widget->setnum(80);});
}

Widget::~Widget()
{
    delete ui;
}
