/********************************************************************************
** Form generated from reading UI file 'memberwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERWINDOW_H
#define UI_MEMBERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <dishwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MemberWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidgetusers;
    QWidget *page;
    QPushButton *pushButtonsearch;
    QPushButton *pushButtoncomment;
    QPushButton *pushButtonover;
    QWidget *page_2;
    DishWidget *widgetmenu_2;
    QPushButton *pushButtonusersback;
    QWidget *page_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonAnonymous;
    QRadioButton *radioButtonRealname;
    QTextEdit *textEdit;
    QPushButton *pushButtonrelease;
    QPushButton *pushButtonclear;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MemberWindow)
    {
        if (MemberWindow->objectName().isEmpty())
            MemberWindow->setObjectName("MemberWindow");
        MemberWindow->resize(800, 600);
        centralwidget = new QWidget(MemberWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidgetusers = new QStackedWidget(centralwidget);
        stackedWidgetusers->setObjectName("stackedWidgetusers");
        page = new QWidget();
        page->setObjectName("page");
        pushButtonsearch = new QPushButton(page);
        pushButtonsearch->setObjectName("pushButtonsearch");
        pushButtonsearch->setGeometry(QRect(330, 90, 161, 71));
        pushButtoncomment = new QPushButton(page);
        pushButtoncomment->setObjectName("pushButtoncomment");
        pushButtoncomment->setGeometry(QRect(330, 230, 161, 71));
        pushButtonover = new QPushButton(page);
        pushButtonover->setObjectName("pushButtonover");
        pushButtonover->setGeometry(QRect(330, 370, 161, 71));
        stackedWidgetusers->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        widgetmenu_2 = new DishWidget(page_2);
        widgetmenu_2->setObjectName("widgetmenu_2");
        widgetmenu_2->setGeometry(QRect(10, 50, 761, 411));
        pushButtonusersback = new QPushButton(page_2);
        pushButtonusersback->setObjectName("pushButtonusersback");
        pushButtonusersback->setGeometry(QRect(490, 480, 161, 61));
        stackedWidgetusers->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        widget = new QWidget(page_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 60, 351, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200")});
        font.setPointSize(14);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioButtonAnonymous = new QRadioButton(widget);
        radioButtonAnonymous->setObjectName("radioButtonAnonymous");

        horizontalLayout_3->addWidget(radioButtonAnonymous);

        radioButtonRealname = new QRadioButton(widget);
        radioButtonRealname->setObjectName("radioButtonRealname");

        horizontalLayout_3->addWidget(radioButtonRealname);

        textEdit = new QTextEdit(page_3);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(150, 160, 491, 271));
        textEdit->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 14pt \"\346\245\267\344\275\223\";\n"
"background-color: transparent;\n"
"border-color: rgb(0, 0, 0);\n"
""));
        textEdit->setFrameShape(QFrame::Panel);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setLineWidth(5);
        pushButtonrelease = new QPushButton(page_3);
        pushButtonrelease->setObjectName("pushButtonrelease");
        pushButtonrelease->setGeometry(QRect(200, 460, 121, 51));
        pushButtonclear = new QPushButton(page_3);
        pushButtonclear->setObjectName("pushButtonclear");
        pushButtonclear->setGeometry(QRect(480, 460, 111, 51));
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 100, 301, 81));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\245\267\344\275\223\";"));
        stackedWidgetusers->addWidget(page_3);

        horizontalLayout->addWidget(stackedWidgetusers);

        MemberWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MemberWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MemberWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MemberWindow);
        statusbar->setObjectName("statusbar");
        MemberWindow->setStatusBar(statusbar);

        retranslateUi(MemberWindow);

        stackedWidgetusers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MemberWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MemberWindow)
    {
        MemberWindow->setWindowTitle(QCoreApplication::translate("MemberWindow", "MainWindow", nullptr));
        pushButtonsearch->setText(QCoreApplication::translate("MemberWindow", "\346\237\245\347\234\213\350\217\234\347\263\273", nullptr));
        pushButtoncomment->setText(QCoreApplication::translate("MemberWindow", "\346\217\220\344\272\244\346\204\217\350\247\201", nullptr));
        pushButtonover->setText(QCoreApplication::translate("MemberWindow", "\351\200\200\345\207\272", nullptr));
        pushButtonusersback->setText(QCoreApplication::translate("MemberWindow", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
        radioButtonAnonymous->setText(QCoreApplication::translate("MemberWindow", "\345\214\277\345\220\215", nullptr));
        radioButtonRealname->setText(QCoreApplication::translate("MemberWindow", "\345\256\236\345\220\215", nullptr));
        pushButtonrelease->setText(QCoreApplication::translate("MemberWindow", "\345\217\221\345\270\203\346\204\217\350\247\201", nullptr));
        pushButtonclear->setText(QCoreApplication::translate("MemberWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\345\271\266\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("MemberWindow", "\350\257\267\345\234\250\346\255\244\347\274\226\350\276\221\346\241\206\345\206\205\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberWindow: public Ui_MemberWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERWINDOW_H
