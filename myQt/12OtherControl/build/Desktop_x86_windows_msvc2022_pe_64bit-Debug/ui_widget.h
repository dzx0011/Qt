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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_2;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton_11;
    QWidget *page_2;
    QToolButton *toolButton;
    QWidget *page_3;
    QRadioButton *radioButton;
    QWidget *page_6;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_2;
    QPushButton *pushButtoncao1;
    QPushButton *pushButtoncao2;
    QSpinBox *spinBox;
    QPushButton *pushButtontext1;
    QPushButton *pushButtontext2;
    QComboBox *comboBox;
    QPushButton *pushButtoncomeback;
    QLabel *labelpic1;
    QLabel *labelgif;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(481, 410);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(50, 20, 291, 241));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFocusPolicy(Qt::StrongFocus);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 267, 228));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout->addWidget(pushButton_10);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayout_2 = new QVBoxLayout(page_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        toolBox = new QToolBox(page_5);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 100, 30));
        pushButton_11 = new QPushButton(page);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(30, 20, 80, 18));
        toolBox->addItem(page, QString::fromUtf8("\350\267\221"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 88, 16));
        toolButton = new QToolButton(page_2);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(70, 40, 21, 19));
        toolBox->addItem(page_2, QString::fromUtf8("\350\265\260"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 100, 30));
        radioButton = new QRadioButton(page_3);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 10, 73, 18));
        toolBox->addItem(page_3, QString::fromUtf8("\346\266\246"));

        verticalLayout_2->addWidget(toolBox);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        horizontalLayout = new QHBoxLayout(page_6);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(page_6);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        stackedWidget->addWidget(page_6);
        pushButtoncao1 = new QPushButton(Widget);
        pushButtoncao1->setObjectName("pushButtoncao1");
        pushButtoncao1->setGeometry(QRect(120, 270, 101, 41));
        pushButtoncao2 = new QPushButton(Widget);
        pushButtoncao2->setObjectName("pushButtoncao2");
        pushButtoncao2->setGeometry(QRect(250, 270, 91, 51));
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(20, 260, 81, 51));
        spinBox->setMaximum(2);
        pushButtontext1 = new QPushButton(Widget);
        pushButtontext1->setObjectName("pushButtontext1");
        pushButtontext1->setGeometry(QRect(80, 360, 80, 18));
        pushButtontext2 = new QPushButton(Widget);
        pushButtontext2->setObjectName("pushButtontext2");
        pushButtontext2->setGeometry(QRect(230, 360, 80, 18));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(360, 30, 81, 31));
        comboBox->setEditable(true);
        pushButtoncomeback = new QPushButton(Widget);
        pushButtoncomeback->setObjectName("pushButtoncomeback");
        pushButtoncomeback->setGeometry(QRect(370, 100, 80, 18));
        labelpic1 = new QLabel(Widget);
        labelpic1->setObjectName("labelpic1");
        labelpic1->setGeometry(QRect(360, 320, 121, 81));
        labelgif = new QLabel(Widget);
        labelgif->setObjectName("labelgif");
        labelgif->setGeometry(QRect(350, 250, 101, 61));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(20, 320, 118, 23));
        progressBar->setValue(24);
        labelpic1->raise();
        stackedWidget->raise();
        pushButtoncao1->raise();
        pushButtoncao2->raise();
        spinBox->raise();
        pushButtontext1->raise();
        pushButtontext2->raise();
        comboBox->raise();
        pushButtoncomeback->raise();
        labelgif->raise();
        progressBar->raise();

        retranslateUi(Widget);
        QObject::connect(pushButtoncao1, &QPushButton::clicked, spinBox, qOverload<>(&QSpinBox::stepUp));
        QObject::connect(pushButtoncao2, &QPushButton::clicked, spinBox, qOverload<>(&QSpinBox::stepDown));
        QObject::connect(spinBox, &QSpinBox::valueChanged, stackedWidget, &QStackedWidget::setCurrentIndex);
        QObject::connect(stackedWidget, &QStackedWidget::currentChanged, spinBox, &QSpinBox::setValue);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);
        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Widget", "\350\267\221", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Widget", "\350\265\260", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Widget", "\346\266\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\346\227\245\345\277\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\350\256\260\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\345\256\236\351\252\214", nullptr));
        pushButtoncao1->setText(QCoreApplication::translate("Widget", "scoreup", nullptr));
        pushButtoncao2->setText(QCoreApplication::translate("Widget", "scoredown", nullptr));
        pushButtontext1->setText(QCoreApplication::translate("Widget", "\347\252\227\345\217\2431", nullptr));
        pushButtontext2->setText(QCoreApplication::translate("Widget", "\347\252\227\345\217\2432", nullptr));
        comboBox->setCurrentText(QString());
        pushButtoncomeback->setText(QCoreApplication::translate("Widget", "\345\233\236\345\210\260\351\235\222\345\262\233", nullptr));
        labelpic1->setText(QCoreApplication::translate("Widget", "pic1", nullptr));
        labelgif->setText(QCoreApplication::translate("Widget", "gif1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
