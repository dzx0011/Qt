#ifndef DISHWIDGET_H
#define DISHWIDGET_H
#include<QTableWidget>
#include <QWidget>
#include"dishes.h"

namespace Ui {
class DishWidget;
}

class DishWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DishWidget(QWidget *parent = nullptr);
    ~DishWidget();



    //重新刷新菜单栏函数
    void ReFreshMenu(bool mode);

    //新建菜系
    void adddish();

    //建立删除图标函数
    void FoundDeleteIcon(QTableWidget *tableWidget,int i);

    //判断控件上是否存在空
    bool ifEmpty();

    //将部件上的信息转换成对象
    dishes FromWidgettoObject(int row);

    //退出时删除刷新文档操作
    void RefreshFile();


signals:
    void EnterSearchMode();
    void OutSearchMode();


private:
    Ui::DishWidget *ui;
};

#endif // DISHWIDGET_H
