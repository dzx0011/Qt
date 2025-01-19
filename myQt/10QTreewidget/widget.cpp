#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->treeWidget->setHeaderLabels(QStringList()<<"菜系"<<"制作方法");//创建临时对象
    //创建顶层节点
    QTreeWidgetItem *item1=new QTreeWidgetItem(QStringList()<<"鲁菜");
    QTreeWidgetItem *item2=new QTreeWidgetItem(QStringList()<<"皖菜");
    ui->treeWidget->addTopLevelItem(item1);
    ui->treeWidget->addTopLevelItem(item2);
    //继续创建子节点
    QTreeWidgetItem *item11=new QTreeWidgetItem(QStringList()<<"九转大肠");
    QTreeWidgetItem *item12=new QTreeWidgetItem(QStringList()<<"清炖马蹄");
    item1->addChild(item11);
    item2->addChild(item12);

}

Widget::~Widget()
{
    delete ui;
}
