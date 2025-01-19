#include "myselfwidget.h"
#include "ui_myselfwidget.h"

MyselfWidget::MyselfWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyselfWidget)
{
    ui->setupUi(this);
    connect(ui->spinBox,&QSpinBox::valueChanged,ui->horizontalSlider,&QSlider::setValue);
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);
}

MyselfWidget::~MyselfWidget()
{
    delete ui;
}

void MyselfWidget::setnum(int num){
    ui->spinBox->setValue(num);
}
