#include "mywidget.h"

#include <QApplication>//包含应用程序头文件

int main(int argc, char *argv[])
{
    //a应用程序对象，在qt中，应用程序对象有且仅有一个
    QApplication a(argc, argv);
    //窗口对象 myWidget父类 ->QWidget w是myWidget派生类实例化的对象
    myWidget w;
    //窗口对象需要show成员函数来显示
    w.show();
    //让应用程序对象进入消息循环，当点击×后退出循环
    return a.exec();
}
