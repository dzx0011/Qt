#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionnew->setIcon(QIcon(":/new/prefix1/p1.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
