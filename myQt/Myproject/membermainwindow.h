#ifndef MEMBERMAINWINDOW_H
#define MEMBERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MemberMainWindow;
}

class MemberMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MemberMainWindow(QWidget *parent = nullptr);
    ~MemberMainWindow();

private:
    Ui::MemberMainWindow *ui;
};

#endif // MEMBERMAINWINDOW_H
