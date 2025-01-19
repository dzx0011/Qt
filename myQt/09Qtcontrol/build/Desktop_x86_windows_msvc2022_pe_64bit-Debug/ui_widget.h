/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonman;
    QRadioButton *radioButtonwoman;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(100, 60, 131, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/p1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(110, 50));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setArrowType(Qt::NoArrow);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(90, 170, 151, 81));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        radioButtonman = new QRadioButton(groupBox);
        radioButtonman->setObjectName("radioButtonman");

        horizontalLayout->addWidget(radioButtonman);

        radioButtonwoman = new QRadioButton(groupBox);
        radioButtonwoman->setObjectName("radioButtonwoman");

        horizontalLayout->addWidget(radioButtonwoman);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(280, 50, 91, 211));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout->addWidget(checkBox_4);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout->addWidget(checkBox_3);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(70, 280, 256, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "hello", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
        radioButtonman->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        radioButtonwoman->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\257\245\351\242\230\351\200\211\346\213\251", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "A", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Widget", "B", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "C", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
