#include "dishwidget.h"
#include "ui_dishwidget.h"
#include<qstring.h>
#include<QToolButton>
#include<QMessageBox>
#include<QPushButton>
#include<QFile>
DishWidget::DishWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DishWidget)
{
    ui->setupUi(this);



    connect(ui->pushButtonover,&QPushButton::clicked,this,[=](){
        ReFreshMenu(1);
        ui->pushButtonover->hide();
        emit OutSearchMode();
    });


    connect(ui->toolButton,&QToolButton::clicked,this,[=](){
        QFile file("./dishes.txt");
        file.open(QIODevice::ReadOnly);
        QByteArray bytearray;
        for(int i=1;i<=dishes::NumOfDishes;i++){
            bytearray=file.readLine();
            if(ui->lineEdit->text()==bytearray.split(' ')[0]){
                ui->tableWidget_2->setRowCount(1);
                QStringList HorHeader,VerHeader;
                HorHeader<<"菜色"<<"食材"<<"地点(餐厅)"<<"地点(楼层)"<<"地点(窗口)"<<"价格"<<"其他属性"<<"删除菜系";
                VerHeader<<QString("查找到目标菜色");
                QTableWidgetItem*item1=new QTableWidgetItem(bytearray.split(' ')[0]);QTableWidgetItem*item2=new QTableWidgetItem(bytearray.split(' ')[1]);
                QTableWidgetItem*item3=new QTableWidgetItem(bytearray.split(' ')[2].split(',')[0]);QTableWidgetItem*item4=new QTableWidgetItem(bytearray.split(' ')[2].split(',')[1]);
                QTableWidgetItem*item5=new QTableWidgetItem(bytearray.split(' ')[2].split(',')[2]);
                QTableWidgetItem*item6=new QTableWidgetItem(bytearray.split(' ')[3]);  QTableWidgetItem*item7=new QTableWidgetItem(bytearray.split(' ')[4]);
                ui->tableWidget_2->setItem(0,0,item1);ui->tableWidget_2->setItem(0,1,item2);
                ui->tableWidget_2->setItem(0,2,item3);ui->tableWidget_2->setItem(0,3,item4);
                ui->tableWidget_2->setItem(0,4,item5);ui->tableWidget_2->setItem(0,5,item6);ui->tableWidget_2->setItem(0,6,item7);
                return;
            }
        }
    });



    connect(this,&DishWidget::EnterSearchMode,this,[=](){
        ui->pushButtonover->show();
    });




    connect(ui->toolButton,&QToolButton::clicked,this,[=](){
        QFile file("./dishes.txt");
        file.open(QIODevice::ReadOnly);
        QByteArray bytearray;
        for(int i=1;i<=dishes::NumOfDishes;i++){
            bytearray=file.readLine();
            if(ui->lineEdit->text()==bytearray.split(' ')[0]){
                //若找到显示退出搜索模式按钮,利用信号建立起两个部件之间的联系
                emit EnterSearchMode();
                QStringList HorHeader,VerHeader;
                HorHeader<<"菜色"<<"食材"<<"地点(餐厅)"<<"地点(楼层)"<<"地点(窗口)"<<"价格"<<"其他属性"<<"删除菜系";
                VerHeader<<QString("查找到目标菜色");
                QTableWidgetItem*item1=new QTableWidgetItem(bytearray.split(' ')[0]);QTableWidgetItem*item2=new QTableWidgetItem(bytearray.split(' ')[1]);
                QTableWidgetItem*item3=new QTableWidgetItem(bytearray.split(' ')[2].split(',')[0]);QTableWidgetItem*item4=new QTableWidgetItem(bytearray.split(' ')[2].split(',')[1]);
                QTableWidgetItem*item5=new QTableWidgetItem(bytearray.split(' ')[2].split(',')[2]);
                QTableWidgetItem*item6=new QTableWidgetItem(bytearray.split(' ')[3].toDouble());  QTableWidgetItem*item7=new QTableWidgetItem(bytearray.split(' ')[4]);
                ui->tableWidget_2->setItem(i,0,item1);ui->tableWidget_2->setItem(i,1,item2);
                ui->tableWidget_2->setItem(i,2,item3);ui->tableWidget_2->setItem(i,3,item4);
                ui->tableWidget_2->setItem(i,4,item5);ui->tableWidget_2->setItem(i,5,item6);ui->tableWidget_2->setItem(i,6,item7);
                return;
            }
        }
        QMessageBox::information(this,"提示","未找到该菜色");

    });

}

DishWidget::~DishWidget()
{
    delete ui;
}

//因为我的菜单tablewidget作为子控件存在，其刷新需要再本身的控件文件中编写，使用到ui，需要用做成员函数使用。
void DishWidget::ReFreshMenu(bool mode){
    deque<dishes>* d1=dishes::FromFileToObject();
    if(mode==0){
        qDebug()<<dishes::NumOfDishes;
        ui->lineEdit->hide();ui->labelprompt->hide();ui->toolButton->hide();ui->pushButtonover->hide();
        QStringList HorHeader,VerHeader;
        HorHeader<<"菜色"<<"食材"<<"地点(餐厅)"<<"地点(楼层)"<<"地点(窗口)"<<"价格"<<"其他属性"<<"删除菜系";
        for(int i=1;i<=dishes::NumOfDishes;i++)VerHeader<<QString("%1").arg(i);
        ui->tableWidget_2->setColumnCount(8);
        ui->tableWidget_2->setRowCount(dishes::NumOfDishes);
        ui->tableWidget_2->setHorizontalHeaderLabels(HorHeader);  ui->tableWidget_2->setVerticalHeaderLabels(VerHeader);
        for(int i=0;i<dishes::NumOfDishes;i++){
            QTableWidgetItem*item1=new QTableWidgetItem((*d1)[i].DishName);QTableWidgetItem*item2=new QTableWidgetItem((*d1)[i].Ingredients.join(","));QTableWidgetItem*item3=new QTableWidgetItem((*d1)[i].Place.restaurant);
            QTableWidgetItem*item4=new QTableWidgetItem((*d1)[i].Place.floors);QTableWidgetItem*item5=new QTableWidgetItem((*d1)[i].Place.windows);
            QTableWidgetItem*item6=new QTableWidgetItem(QString::number((*d1)[i].Price));  QTableWidgetItem*item7=new QTableWidgetItem((*d1)[i].OtherAttributes);
            ui->tableWidget_2->setItem(i,0,item1);ui->tableWidget_2->setItem(i,1,item2);
            ui->tableWidget_2->setItem(i,2,item3);ui->tableWidget_2->setItem(i,3,item4);
            ui->tableWidget_2->setItem(i,4,item5);ui->tableWidget_2->setItem(i,5,item6);ui->tableWidget_2->setItem(i,6,item7);
            FoundDeleteIcon(ui->tableWidget_2,i);
        }
        delete d1;
    }
    if(mode==1){
        qDebug()<<dishes::NumOfDishes;
        QStringList HorHeader,VerHeader;
        ui->pushButtonover->hide();
        HorHeader<<"菜色"<<"食材"<<"地点(餐厅)"<<"地点(楼层)"<<"地点(窗口)"<<"价格"<<"其他属性";
        for(int i=1;i<=dishes::NumOfDishes;i++)VerHeader<<QString("%1").arg(i);
        ui->tableWidget_2->setColumnCount(7);
        ui->tableWidget_2->setRowCount(dishes::NumOfDishes+1);
        ui->tableWidget_2->setHorizontalHeaderLabels(HorHeader);  ui->tableWidget_2->setVerticalHeaderLabels(VerHeader);
        for(int i=0;i<dishes::NumOfDishes;i++){
            QTableWidgetItem*item1=new QTableWidgetItem((*d1)[i].DishName);QTableWidgetItem*item2=new QTableWidgetItem((*d1)[i].Ingredients.join(","));QTableWidgetItem*item3=new QTableWidgetItem((*d1)[i].Place.restaurant);
            QTableWidgetItem*item4=new QTableWidgetItem((*d1)[i].Place.floors);QTableWidgetItem*item5=new QTableWidgetItem((*d1)[i].Place.windows);
            QTableWidgetItem*item6=new QTableWidgetItem(QString::number((*d1)[i].Price));  QTableWidgetItem*item7=new QTableWidgetItem((*d1)[i].OtherAttributes);
            ui->tableWidget_2->setItem(i,0,item1);ui->tableWidget_2->setItem(i,1,item2);
            ui->tableWidget_2->setItem(i,2,item3);ui->tableWidget_2->setItem(i,3,item4);
            ui->tableWidget_2->setItem(i,4,item5);ui->tableWidget_2->setItem(i,5,item6);ui->tableWidget_2->setItem(i,6,item7);
            for(int k=0;k<7;k++)ui->tableWidget_2->item(i,k)->setFlags(Qt::ItemFlags(~Qt::ItemIsEditable));
        }
        delete d1;
    }
}

//增加菜品的操作
void DishWidget::adddish(){
    ui->tableWidget_2->insertRow(dishes::NumOfDishes);
    dishes::NumOfDishes++;
    QStringList VerHeader;
    for(int i=1;i<=dishes::NumOfDishes;i++)VerHeader<<QString("%1").arg(i);
    ui->tableWidget_2->setRowCount(dishes::NumOfDishes);ui->tableWidget_2->setVerticalHeaderLabels(VerHeader);
    //新建图标
    FoundDeleteIcon(ui->tableWidget_2,dishes::NumOfDishes-1);
}

//建立删除图标
void DishWidget::FoundDeleteIcon(QTableWidget *tableWidget,int i){
    QToolButton *toolButton = new QToolButton(tableWidget);
    toolButton->resize(100,100);
    toolButton->setIcon(QIcon(":/src/delete.png"));
    tableWidget->setCellWidget(i, 7, toolButton);
    DishWidget::connect(toolButton,&QToolButton::clicked,tableWidget,[=](){
        if(dishes::NumOfDishes==1)QMessageBox::critical(tableWidget,"警告","至少应该有一个菜色",QMessageBox::Ok);
        else if(QMessageBox::Ok==QMessageBox::information(tableWidget,"提示：","确定删除该菜色吗",QMessageBox::Ok|QMessageBox::Close,QMessageBox::Close)){
            int row = tableWidget->indexAt(toolButton->pos()).row();//利用pos获取Point
            tableWidget->removeRow(row); // 删除该行
            dishes::NumOfDishes--;
        }
    });
}

//判断是否Tablewidget中是否存在有信息没有填写
bool DishWidget::ifEmpty(){
    for(int i=0;i<dishes::NumOfDishes;i++){
        for(int j=0;j<=6;j++)
            if(ui->tableWidget_2->item(i,j)==nullptr){
                return true;
            }
    }
    return false;
}
//将部件中的内容转换为对象
dishes DishWidget::FromWidgettoObject(int row){
    dishes dish;
    dish.DishName=ui->tableWidget_2->item(row,0)->text();
    int temp=0;
    while(temp<ui->tableWidget_2->item(row,1)->text().toUtf8().split(',').size())dish.Ingredients<<ui->tableWidget_2->item(row,1)->text().toUtf8().split(',')[temp++];
    dish.Place.restaurant=ui->tableWidget_2->item(row,2)->text();
    dish.Place.floors=ui->tableWidget_2->item(row,3)->text();
    dish.Place.windows=ui->tableWidget_2->item(row,4)->text();
    dish.Price=ui->tableWidget_2->item(row,5)->text().toDouble();
    dish.OtherAttributes=ui->tableWidget_2->item(row,6)->text();
    if(dish.OtherAttributes[dish.OtherAttributes.size()-1]!='\n')dish.OtherAttributes.append('\n');
    return dish;
}

//更新文档文件
void DishWidget::RefreshFile(){
    QFile file("./dishes.txt");
    file.open(QIODevice::WriteOnly);
    file.close();
    for(int i=0;i<dishes::NumOfDishes;i++){
        dishes dish=FromWidgettoObject(i);
        dish.FromObjectToFile();
    }
}

