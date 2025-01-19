/********************************************************************************
** Form generated from reading UI file 'logonwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGONWIDGET_H
#define UI_LOGONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogOnWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWidget *allwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *choicewidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *buttonwidget;
    QToolButton *toolButtonback;
    QToolButton *toolButtongoon;
    QWidget *page_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelname;
    QLineEdit *lineEditname;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetkey;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelkey;
    QLineEdit *lineEditkey;
    QToolButton *toolButtoneye;
    QPushButton *pushButtongoon;
    QPushButton *pushButtonback;
    QWidget *page_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widgetname_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelname_2;
    QLineEdit *lineEditname_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEditAccount;
    QWidget *widgetkey_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelkey_2;
    QLineEdit *lineEditkey_2;
    QPushButton *pushButtongoon_2;
    QPushButton *pushButtonback_2;
    QToolButton *toolButtoneye_2;

    void setupUi(QWidget *LogOnWidget)
    {
        if (LogOnWidget->objectName().isEmpty())
            LogOnWidget->setObjectName("LogOnWidget");
        LogOnWidget->resize(491, 301);
        horizontalLayout_2 = new QHBoxLayout(LogOnWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(LogOnWidget);
        stackedWidget->setObjectName("stackedWidget");
        QFont font;
        font.setPointSize(9);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        allwidget = new QWidget(page);
        allwidget->setObjectName("allwidget");
        verticalLayout = new QVBoxLayout(allwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(allwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        choicewidget = new QWidget(allwidget);
        choicewidget->setObjectName("choicewidget");
        choicewidget->setFont(font);
        horizontalLayout = new QHBoxLayout(choicewidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(170, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        radioButton = new QRadioButton(choicewidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(choicewidget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout->addWidget(choicewidget);

        buttonwidget = new QWidget(allwidget);
        buttonwidget->setObjectName("buttonwidget");
        buttonwidget->setFont(font);
        toolButtonback = new QToolButton(buttonwidget);
        toolButtonback->setObjectName("toolButtonback");
        toolButtonback->setGeometry(QRect(330, 30, 101, 41));
        toolButtonback->setFont(font);
        toolButtongoon = new QToolButton(buttonwidget);
        toolButtongoon->setObjectName("toolButtongoon");
        toolButtongoon->setGeometry(QRect(180, 30, 101, 41));

        verticalLayout->addWidget(buttonwidget);


        verticalLayout_3->addWidget(allwidget);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        widget = new QWidget(page_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 30, 251, 181));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widgetname = new QWidget(widget);
        widgetname->setObjectName("widgetname");
        horizontalLayout_3 = new QHBoxLayout(widgetname);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelname = new QLabel(widgetname);
        labelname->setObjectName("labelname");

        horizontalLayout_3->addWidget(labelname);

        lineEditname = new QLineEdit(widgetname);
        lineEditname->setObjectName("lineEditname");

        horizontalLayout_3->addWidget(lineEditname);


        verticalLayout_2->addWidget(widgetname);

        verticalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        widgetkey = new QWidget(widget);
        widgetkey->setObjectName("widgetkey");
        horizontalLayout_4 = new QHBoxLayout(widgetkey);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelkey = new QLabel(widgetkey);
        labelkey->setObjectName("labelkey");

        horizontalLayout_4->addWidget(labelkey);

        lineEditkey = new QLineEdit(widgetkey);
        lineEditkey->setObjectName("lineEditkey");
        QFont font1;
        font1.setPointSize(9);
        font1.setHintingPreference(QFont::PreferNoHinting);
        lineEditkey->setFont(font1);
        lineEditkey->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEditkey);


        verticalLayout_2->addWidget(widgetkey);

        toolButtoneye = new QToolButton(page_2);
        toolButtoneye->setObjectName("toolButtoneye");
        toolButtoneye->setGeometry(QRect(410, 160, 20, 19));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtoneye->setIcon(icon);
        pushButtongoon = new QPushButton(page_2);
        pushButtongoon->setObjectName("pushButtongoon");
        pushButtongoon->setGeometry(QRect(189, 230, 101, 41));
        pushButtonback = new QPushButton(page_2);
        pushButtonback->setObjectName("pushButtonback");
        pushButtonback->setGeometry(QRect(339, 230, 101, 41));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        widget_2 = new QWidget(page_3);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(170, 30, 251, 181));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widgetname_2 = new QWidget(widget_2);
        widgetname_2->setObjectName("widgetname_2");
        horizontalLayout_5 = new QHBoxLayout(widgetname_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelname_2 = new QLabel(widgetname_2);
        labelname_2->setObjectName("labelname_2");

        horizontalLayout_5->addWidget(labelname_2);

        lineEditname_2 = new QLineEdit(widgetname_2);
        lineEditname_2->setObjectName("lineEditname_2");

        horizontalLayout_5->addWidget(lineEditname_2);


        verticalLayout_4->addWidget(widgetname_2);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_7 = new QHBoxLayout(widget_3);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        horizontalLayout_7->addWidget(label_2);

        lineEditAccount = new QLineEdit(widget_3);
        lineEditAccount->setObjectName("lineEditAccount");

        horizontalLayout_7->addWidget(lineEditAccount);


        verticalLayout_4->addWidget(widget_3);

        widgetkey_2 = new QWidget(widget_2);
        widgetkey_2->setObjectName("widgetkey_2");
        horizontalLayout_6 = new QHBoxLayout(widgetkey_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelkey_2 = new QLabel(widgetkey_2);
        labelkey_2->setObjectName("labelkey_2");

        horizontalLayout_6->addWidget(labelkey_2);

        lineEditkey_2 = new QLineEdit(widgetkey_2);
        lineEditkey_2->setObjectName("lineEditkey_2");
        lineEditkey_2->setFont(font1);
        lineEditkey_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(lineEditkey_2);


        verticalLayout_4->addWidget(widgetkey_2);

        pushButtongoon_2 = new QPushButton(page_3);
        pushButtongoon_2->setObjectName("pushButtongoon_2");
        pushButtongoon_2->setGeometry(QRect(189, 230, 101, 41));
        pushButtonback_2 = new QPushButton(page_3);
        pushButtonback_2->setObjectName("pushButtonback_2");
        pushButtonback_2->setGeometry(QRect(339, 230, 101, 41));
        toolButtoneye_2 = new QToolButton(page_3);
        toolButtoneye_2->setObjectName("toolButtoneye_2");
        toolButtoneye_2->setGeometry(QRect(410, 170, 20, 19));
        toolButtoneye_2->setIcon(icon);
        stackedWidget->addWidget(page_3);

        horizontalLayout_2->addWidget(stackedWidget);


        retranslateUi(LogOnWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogOnWidget);
    } // setupUi

    void retranslateUi(QWidget *LogOnWidget)
    {
        LogOnWidget->setWindowTitle(QCoreApplication::translate("LogOnWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("LogOnWidget", "\350\257\267 \351\200\211 \346\213\251 \344\275\240 \347\232\204 \347\231\273 \345\275\225 \346\226\271 \345\274\217\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("LogOnWidget", "\347\256\241\347\220\206\345\221\230", nullptr));
        radioButton_2->setText(QCoreApplication::translate("LogOnWidget", "\345\255\246\347\224\237/\350\200\201\345\270\210(\347\224\250\346\210\267)", nullptr));
        toolButtonback->setText(QCoreApplication::translate("LogOnWidget", "\351\200\200\345\207\272", nullptr));
        toolButtongoon->setText(QCoreApplication::translate("LogOnWidget", "\347\273\247\347\273\255", nullptr));
        labelname->setText(QCoreApplication::translate("LogOnWidget", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        labelkey->setText(QCoreApplication::translate("LogOnWidget", "\345\257\206  \347\240\201\357\274\232", nullptr));
        toolButtoneye->setText(QCoreApplication::translate("LogOnWidget", "...", nullptr));
        pushButtongoon->setText(QCoreApplication::translate("LogOnWidget", "\347\231\273\345\205\245", nullptr));
        pushButtonback->setText(QCoreApplication::translate("LogOnWidget", "\350\277\224\345\233\236", nullptr));
        labelname_2->setText(QCoreApplication::translate("LogOnWidget", "\345\247\223  \345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("LogOnWidget", "\350\264\246  \345\217\267\357\274\232", nullptr));
        labelkey_2->setText(QCoreApplication::translate("LogOnWidget", "\345\257\206  \347\240\201\357\274\232", nullptr));
        pushButtongoon_2->setText(QCoreApplication::translate("LogOnWidget", "\347\231\273\345\205\245", nullptr));
        pushButtonback_2->setText(QCoreApplication::translate("LogOnWidget", "\350\277\224\345\233\236", nullptr));
        toolButtoneye_2->setText(QCoreApplication::translate("LogOnWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogOnWidget: public Ui_LogOnWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGONWIDGET_H
