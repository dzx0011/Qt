#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H
#include <QMainWindow>
#include<QTableWidget>
#include<QPainter>
#include<QTableWidget>
#include<QToolButton>
#include<QIcon>
#include<QMessageBox>
#include<QPushButton>
namespace Ui {
class ManagerWindow;
}

class ManagerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagerWindow(QWidget *parent = nullptr);
    ~ManagerWindow();

signals:
    void mainwindowshow();//显示登入界面。

private:
    Ui::ManagerWindow *ui;

    void paintEvent(QPaintEvent*pt);

    void founddeleteIcon(QTableWidget *tableWidget,int i=-1);
};


#endif // MANAGERWINDOW_H
