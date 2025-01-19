/********************************************************************************
** Form generated from reading UI file 'myselfwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSELFWIDGET_H
#define UI_MYSELFWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyselfWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *MyselfWidget)
    {
        if (MyselfWidget->objectName().isEmpty())
            MyselfWidget->setObjectName("MyselfWidget");
        MyselfWidget->resize(273, 42);
        horizontalLayout = new QHBoxLayout(MyselfWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        spinBox = new QSpinBox(MyselfWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimumSize(QSize(100, 30));
        spinBox->setMaximum(100);
        spinBox->setSingleStep(1);
        spinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(MyselfWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimumSize(QSize(0, 30));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(MyselfWidget);

        QMetaObject::connectSlotsByName(MyselfWidget);
    } // setupUi

    void retranslateUi(QWidget *MyselfWidget)
    {
        MyselfWidget->setWindowTitle(QCoreApplication::translate("MyselfWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyselfWidget: public Ui_MyselfWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSELFWIDGET_H
