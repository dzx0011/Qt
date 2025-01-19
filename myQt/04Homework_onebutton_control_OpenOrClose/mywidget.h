#ifndef MYWIDGET_H
#define MYWIDGET_H
#include<QPushButton>
#include <QWidget>

class mywidget : public QWidget
{
    Q_OBJECT
public:
    explicit mywidget(QWidget *parent = nullptr);

private slots:
    void ChangeStage();

signals:

private:
    QPushButton *button;
    QWidget *window;
};

#endif // MYWIDGET_H
