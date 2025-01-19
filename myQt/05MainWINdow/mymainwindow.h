#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = nullptr);
    ~myMainWindow();
};
#endif // MYMAINWINDOW_H
