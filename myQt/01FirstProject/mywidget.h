#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT//宏，允许类内使用信号和槽

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();
};
#endif // MYWIDGET_H
