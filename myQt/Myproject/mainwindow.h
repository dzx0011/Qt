#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QPaintEvent>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent*pt);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
