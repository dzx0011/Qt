#include "widget.h"
#include<QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{



    QString str("我是#你的你\\#是我的水");
    qDebug()<<str.split("#")[0];
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
