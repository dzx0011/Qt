#include "memberwindow.h"
#include "ui_memberwindow.h"
#include"dishwidget.h"
#include"member.h"
MemberWindow::MemberWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MemberWindow)
{
    ui->setupUi(this);
    //设置窗口名称
    setWindowTitle("饕在山青！欢迎进入山东大学青岛校区餐厅反馈系统");
    //设置窗口的大小
    setMaximumSize(800,600);
    setMinimumSize(800,600);
    ui->stackedWidgetusers->setCurrentIndex(0);

    //评论区默认设置
    ui->radioButtonAnonymous->setChecked(true);

    //查看菜系
    connect(ui->pushButtonsearch,&QPushButton::clicked,this,[=](){
        ui->stackedWidgetusers->setCurrentIndex(1);
        ui->widgetmenu_2->ReFreshMenu(1);
    });

    connect(ui->pushButtonusersback,&QPushButton::clicked,this,[=](){
        ui->stackedWidgetusers->setCurrentIndex(0);
    });

    //建立搜索模式移除保存按键的联系
    connect(ui->widgetmenu_2,&DishWidget::EnterSearchMode,this,[=]{
        ui->pushButtonusersback->hide();
    });

    connect(ui->widgetmenu_2,&DishWidget::OutSearchMode,this,[=](){
        ui->pushButtonusersback->show();
    });


    //评论区域
    connect(ui->pushButtoncomment,&QPushButton::clicked,this,[=](){
        ui->stackedWidgetusers->setCurrentIndex(2);
    });
    //上传操作
    connect(ui->pushButtonrelease,&QPushButton::clicked,this,[=](){
        if(ui->textEdit->toPlainText()==""){
            QMessageBox::information(this,"提示","意见不能为空！",QMessageBox::Ok);
            return;
        }
        fromEdittiFile(ui->radioButtonAnonymous,ui->textEdit);
        QMessageBox::information(this,"提示","已成功保存",QMessageBox::Ok);
        ui->textEdit->clear();
    });


    //清空操作
    connect(ui->pushButtonclear,&QPushButton::clicked,this,[=](){
        ui->textEdit->clear();
        ui->stackedWidgetusers->setCurrentIndex(0);
    });


    //退出
    connect(ui->pushButtonover,&QPushButton::clicked,this,[=](){
        emit closeButtonClicked();
        this->close();
    });
}

MemberWindow::~MemberWindow()
{
    delete ui;

}
void MemberWindow::fromEdittiFile(QRadioButton *radiobutton,QTextEdit * textedit){
    QFile file("./comments.txt");
    file.open(QIODevice::Append);
    file.write("##COMMENT##");
    if(radiobutton->isChecked()==1){
        file.write("匿名用户##TEXT##");
    }
    else{
        file.write(Member::NowLogonName.toUtf8());
        file.write("##TEXT##");
    }
    QString text=textedit->toPlainText();
    file.write(text.toUtf8());
    Member::NumOfComments++;
    file.close();

}

void MemberWindow::paintEvent(QPaintEvent*pt){
    QPainter painter(this);
    QPixmap pixmap(":/menu/menupic.jpg");
    painter.drawPixmap(this->rect(),pixmap);
}


