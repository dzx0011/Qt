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
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <myselfwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    MyselfWidget *widget;
    QPushButton *pushButtonset50;
    QPushButton *pushButtonset80;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(394, 322);
        widget = new MyselfWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 60, 281, 31));
        pushButtonset50 = new QPushButton(Widget);
        pushButtonset50->setObjectName("pushButtonset50");
        pushButtonset50->setGeometry(QRect(90, 150, 80, 18));
        pushButtonset80 = new QPushButton(Widget);
        pushButtonset80->setObjectName("pushButtonset80");
        pushButtonset80->setGeometry(QRect(220, 150, 80, 18));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonset50->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\344\270\27250", nullptr));
        pushButtonset80->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\344\270\27280", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
