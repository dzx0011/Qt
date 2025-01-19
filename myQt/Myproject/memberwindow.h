#ifndef MEMBERWINDOW_H
#define MEMBERWINDOW_H
#include<QTextEdit>
#include<QRadioButton>
#include <QMainWindow>
#include<QPainter>
#include<QFile>
#include<QMessageBox>
namespace Ui {
class MemberWindow;
}

class MemberWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberWindow(QWidget *parent = nullptr);
    ~MemberWindow();


    void fromEdittiFile(QRadioButton *radiobutton,QTextEdit * textedit);

    void paintEvent(QPaintEvent*pt);
signals:
    void closeButtonClicked();


private:
    Ui::MemberWindow *ui;
};

#endif // MEMBERWINDOW_H
