#include "widget.h"
#include"mywidget.h"
#include<QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mywidget w;
    w.show();
    return a.exec();
}
