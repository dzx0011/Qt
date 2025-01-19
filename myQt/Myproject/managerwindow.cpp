#include "managerwindow.h"
#include "ui_managerwindow.h"
#include"administrator.h"
#include"dishes.h"
#include"dishwidget.h"
#include"member.h"
#include<QFileInfo>
ManagerWindow::ManagerWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ManagerWindow)
{
    ui->setupUi(this);
    //设置窗口名称
    setWindowTitle("管理员操作界面");
    //设置窗口的大小
    setMaximumSize(800,600);
    setMinimumSize(800,600);
    ui->lineEditTime->setText(QFileInfo("./admin.txt").lastModified().toString("yyyy/MM/dd hh:mm:ss"));
    ui->lineEditTime->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(0);
    //Page1管理功能（）
    //管理界面(每一次打开更新最新管理员信息)
    connect(ui->pushButtonmana,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(1);
        //Page2其他操作
        QStringList HorHeader,VerHeader;
        HorHeader<<"用户名"<<"密码"<<"删除该用户?";
        for(int i=1;i<=Administrator::numofAdmin;i++)VerHeader<<QString("用户%1").arg(i);
        ui->tableWidget->setColumnCount(3);
        ui->tableWidget->setRowCount(Administrator::numofAdmin);
        ui->tableWidget->setHorizontalHeaderLabels(HorHeader);  ui->tableWidget->setVerticalHeaderLabels(VerHeader);

        //将文件的数据显示到屏幕上,并实现删除该行的功能
        QFile file("./admin.txt");
        file.open(QIODevice::ReadOnly);
        for(int i=0;i<Administrator::numofAdmin;i++){
            QByteArray temp=file.readLine().trimmed();
            for(int j=0;j<=1;j++){
                //添加到了控件中，就会随着控件消亡而消亡，无需手动释放。
                QTableWidgetItem *item = new QTableWidgetItem(temp.split(' ')[j]);
                ui->tableWidget->setItem(i,j,item);
            }
            //创建删除按键
            founddeleteIcon(ui->tableWidget,i);
        }
        file.close();
        for(int k=0;k<Administrator::numofAdmin;k++)ui->tableWidget->item(k,0)->setFlags(Qt::ItemFlags(~Qt::ItemIsEditable));

    });
    //退出登入操作。
    connect(ui->pushButtonunsign,&QPushButton::clicked,this,[=](){
        emit mainwindowshow();
        this->close();
    });




    //Page2其他操作

    //新建管理人
    connect(ui->pushButtonsnew,&QPushButton::clicked,this,[=](){
        //更新表头
        ui->tableWidget->insertRow(Administrator::numofAdmin);
        Administrator::numofAdmin++;
        QStringList VerHeader;
        for(int i=1;i<=Administrator::numofAdmin;i++)VerHeader<<QString("用户%1").arg(i);
        ui->tableWidget->setRowCount(Administrator::numofAdmin);ui->tableWidget->setVerticalHeaderLabels(VerHeader);
        //新建图标
       founddeleteIcon(ui->tableWidget,Administrator::numofAdmin-1);
    });

    //返回功能返回上级并且更新刷新file文档
    connect(ui->pushButtonbacksave,&QToolButton::clicked,this,[=](){
        //检测用户名或者密码为空的现象若出现报错，提前结束联通。
        for(int i=0;i<Administrator::numofAdmin;i++){
            for(int j=0;j<=1;j++)
                if(ui->tableWidget->item(i,j)==nullptr){
                    QMessageBox::critical(this,"警告","用户名或者密码不得为空");
                    return;
                }
        }

        QFile file("./temp.txt");
        file.open(QIODevice::WriteOnly);
        for(int i=0;i<Administrator::numofAdmin;i++){
            file.write(ui->tableWidget->item(i,0)->text().toUtf8());
            file.write(" ");
            file.write(ui->tableWidget->item(i,1)->text().toUtf8());
            file.write("\n");
        }
        QFile("./admin.txt").remove();
        file.rename("./admin.txt");//rename要提供完整路径
        ui->stackedWidget->setCurrentIndex(0);
    });

    //page3操作菜色方面进行封装操作
    connect(ui->pushButtondishes,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(2);
        ui->widgetmenu->ReFreshMenu(0);
    });

    //添加新一行以编辑新菜品
    connect(ui->pushButtonsnewdish,&QPushButton::clicked,this,[=](){
        ui->widgetmenu->adddish();
    });
    //退出操作并保存
    connect(ui->pushButtonbacksave_2,&QPushButton::clicked,this,[=](){
        if(ui->widgetmenu->ifEmpty()){
            QMessageBox::critical(this,"警告","存在菜品信息为空，请完善所有信息！");
            return;
        }
        else{
            ui->widgetmenu->RefreshFile();
            ui->stackedWidget->setCurrentIndex(0);
        }
    });

    //page4
    //查看评论
    //直接以槽函数实现了
    connect(ui->pushButtoncheckfeedback,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(4);
        ui->spinBox->setValue(Member::NumOfComments);
        ui->spinBox->setReadOnly(true);
        QFile file("./comments.txt");
        file.open(QIODevice::ReadOnly);
        QStringList HorHeader,VerHeader;
        HorHeader<<"用户"<<"意见";
        for(int i=1;i<=Member::NumOfComments;i++)VerHeader<<QString("%1").arg(i);
        ui->tableWidget_2->setColumnCount(2);
        ui->tableWidget_2->setRowCount(Member::NumOfComments);
        ui->tableWidget_2->setHorizontalHeaderLabels(HorHeader);  ui->tableWidget_2->setVerticalHeaderLabels(VerHeader);
        QString text=QString::fromStdString(file.readAll().toStdString());
        for(int i=1;i<=Member::NumOfComments;i++){
            QTableWidgetItem*item1=new QTableWidgetItem(text.split("##COMMENT##")[i].split("##TEXT##")[0]);
            QTableWidgetItem*item2=new QTableWidgetItem(text.split("##COMMENT##")[i].split("##TEXT##")[1]);
            ui->tableWidget_2->setItem(i-1,0,item1);
            ui->tableWidget_2->setItem(i-1,1,item2);
            for(int k=0;k<2;k++)ui->tableWidget_2->item(i-1,k)->setFlags(Qt::ItemFlags(~Qt::ItemIsEditable));
        }
    });

    connect(ui->pushButton_4,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });

}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::paintEvent(QPaintEvent*pt){
    QPainter painter(this);
    QPixmap pixmap(":/menu/menupic.jpg");
    painter.drawPixmap(this->rect(),pixmap);
}

void ManagerWindow::founddeleteIcon(QTableWidget *tableWidget,int i){
    QToolButton *toolButton = new QToolButton(tableWidget);
    toolButton->resize(100,100);
    toolButton->setIcon(QIcon(":/src/delete.png"));
    tableWidget->setCellWidget(i, 2, toolButton);
    ManagerWindow::connect(toolButton,&QToolButton::clicked,tableWidget,[=](){
        if(Administrator::numofAdmin==1)QMessageBox::critical(tableWidget,"警告","至少应该有一个管理员",QMessageBox::Ok);
        else if(QMessageBox::Ok==QMessageBox::information(tableWidget,"提示：","确定删除该管理员吗",QMessageBox::Ok|QMessageBox::Close,QMessageBox::Close)){
            int row = tableWidget->indexAt(toolButton->pos()).row();//利用pos获取Point
            tableWidget->removeRow(row); // 删除该行
            Administrator::numofAdmin--;
        }
    });
}
