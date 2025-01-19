#include "mymainwindow.h"
#include<QMenuBar>
#include<QDebug>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QTextEdit>
myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent)
{   this->resize(600,400);

    //菜单栏创建
    QMenuBar *Bar = menuBar();//
    //将菜单栏放入窗口
    setMenuBar(Bar);
    //创建菜单
    QMenu *fileMenu = Bar->addMenu("文件");
    QMenu * editMenu= Bar->addMenu("编辑");

    //两种添加功能的区别
    QAction *openAction = new QAction("打开", this);//这种更为常用
    fileMenu->addAction("新建");//便捷函数，无法链接信号槽

    fileMenu->addAction(openAction);
    fileMenu->addSeparator();
    //connect(openAction, SIGNAL(triggered()), this, SLOT(openFile()));

    //工具栏
    QToolBar *toolbar=new QToolBar(this);
    addToolBar(Qt::RightToolBarArea,toolbar);
    QAction*ChangeWordSize=new QAction("大小",this);
    QAction*ChangeTypeface=new QAction("字体",this);
    toolbar->addAction(ChangeWordSize);
    toolbar->addAction(ChangeTypeface);
    //除了添加项目也可以添加按钮
    QPushButton *btn=new QPushButton("设置",this);
    toolbar->addWidget(btn);//添加按钮配件
    //也可以添加分割线。
    toolbar->addSeparator();
    //设置停靠区域
    toolbar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    //设置浮动
    toolbar->setFloatable(false);
    //设置移动（设置为false后以上都没意义）
    toolbar->setMovable(false);

    //状态栏
    QStatusBar*statusbar=new QStatusBar(this);
    setStatusBar(statusbar);
    //放置标签控件
    QLabel *label=new QLabel("字数",this);
    statusbar->addWidget(label);

    //铆接部件(浮动窗口)可以有多个
    QDockWidget*dockwidget=new QDockWidget("浮动窗口",this);
    //给特定区域浮动窗口
    addDockWidget(Qt::BottomDockWidgetArea,dockwidget);
    //设置后期停靠区域
    dockwidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

    //核心部分(以textedit为例子)
    QTextEdit *edit=new QTextEdit(this);
    setCentralWidget(edit);//设置中心部件

}

myMainWindow::~myMainWindow() {}
