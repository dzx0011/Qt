/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include <dishwidget.h>

QT_BEGIN_NAMESPACE

class Ui_ManagerWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButtonmana;
    QPushButton *pushButtoncheckfeedback;
    QPushButton *pushButtondishes;
    QPushButton *pushButtonunsign;
    QLabel *label_2;
    QLineEdit *lineEditTime;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QPushButton *pushButtonsnew;
    QPushButton *pushButtonbacksave;
    QWidget *page_3;
    DishWidget *widgetmenu;
    QPushButton *pushButtonbacksave_2;
    QPushButton *pushButtonsnewdish;
    QWidget *page_4;
    QPushButton *pushButton_2;
    QWidget *page_5;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget_2;
    QSpinBox *spinBox;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManagerWindow)
    {
        if (ManagerWindow->objectName().isEmpty())
            ManagerWindow->setObjectName("ManagerWindow");
        ManagerWindow->resize(800, 600);
        ManagerWindow->setStyleSheet(QString::fromUtf8("window->setStyleSheet(\"background-image: url(:/menu/menupic.jpg);\");"));
        centralwidget = new QWidget(ManagerWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        pushButtonmana = new QPushButton(page);
        pushButtonmana->setObjectName("pushButtonmana");
        pushButtonmana->setGeometry(QRect(320, 96, 160, 61));
        pushButtoncheckfeedback = new QPushButton(page);
        pushButtoncheckfeedback->setObjectName("pushButtoncheckfeedback");
        pushButtoncheckfeedback->setGeometry(QRect(320, 321, 160, 61));
        pushButtondishes = new QPushButton(page);
        pushButtondishes->setObjectName("pushButtondishes");
        pushButtondishes->setGeometry(QRect(320, 209, 160, 61));
        pushButtonunsign = new QPushButton(page);
        pushButtonunsign->setObjectName("pushButtonunsign");
        pushButtonunsign->setGeometry(QRect(320, 433, 160, 61));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 30, 151, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";\n"
"color:rgb(255, 255, 255);"));
        lineEditTime = new QLineEdit(page);
        lineEditTime->setObjectName("lineEditTime");
        lineEditTime->setGeometry(QRect(400, 30, 181, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(180, 70, 531, 351));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223")});
        font.setPointSize(20);
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
"color: white;\n"
""));
        tableWidget->setAutoScroll(true);
        tableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setTextElideMode(Qt::ElideNone);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::DashDotDotLine);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget->horizontalHeader()->setDefaultSectionSize(170);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(75);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(true);
        pushButtonsnew = new QPushButton(page_2);
        pushButtonsnew->setObjectName("pushButtonsnew");
        pushButtonsnew->setGeometry(QRect(260, 440, 121, 71));
        pushButtonbacksave = new QPushButton(page_2);
        pushButtonbacksave->setObjectName("pushButtonbacksave");
        pushButtonbacksave->setGeometry(QRect(550, 440, 121, 71));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        widgetmenu = new DishWidget(page_3);
        widgetmenu->setObjectName("widgetmenu");
        widgetmenu->setGeometry(QRect(30, 0, 711, 431));
        pushButtonbacksave_2 = new QPushButton(page_3);
        pushButtonbacksave_2->setObjectName("pushButtonbacksave_2");
        pushButtonbacksave_2->setGeometry(QRect(540, 460, 121, 71));
        pushButtonsnewdish = new QPushButton(page_3);
        pushButtonsnewdish->setObjectName("pushButtonsnewdish");
        pushButtonsnewdish->setGeometry(QRect(260, 460, 121, 71));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButton_2 = new QPushButton(page_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 450, 111, 51));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        pushButton_4 = new QPushButton(page_5);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(330, 470, 140, 60));
        tableWidget_2 = new QTableWidget(page_5);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setForeground(brush1);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        if (tableWidget_2->rowCount() < 4)
            tableWidget_2->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 0, __qtablewidgetitem15);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(140, 80, 551, 371));
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);
        tableWidget_2->setSizeIncrement(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(14);
        tableWidget_2->setFont(font1);
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
"color: white;\n"
""));
        tableWidget_2->setAutoScroll(true);
        tableWidget_2->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget_2->setAlternatingRowColors(false);
        tableWidget_2->setTextElideMode(Qt::ElideNone);
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setGridStyle(Qt::DashDotDotLine);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(true);
        tableWidget_2->horizontalHeader()->setVisible(true);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_2->horizontalHeader()->setHighlightSections(true);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(true);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(75);
        tableWidget_2->verticalHeader()->setHighlightSections(true);
        tableWidget_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->verticalHeader()->setStretchLastSection(true);
        spinBox = new QSpinBox(page_5);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(580, 40, 71, 41));
        label = new QLabel(page_5);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 50, 111, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 11pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        stackedWidget->addWidget(page_5);

        horizontalLayout->addWidget(stackedWidget);

        ManagerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManagerWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        ManagerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ManagerWindow);
        statusbar->setObjectName("statusbar");
        ManagerWindow->setStatusBar(statusbar);

        retranslateUi(ManagerWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ManagerWindow)
    {
        ManagerWindow->setWindowTitle(QCoreApplication::translate("ManagerWindow", "MainWindow", nullptr));
        pushButtonmana->setText(QCoreApplication::translate("ManagerWindow", "\347\256\241\347\220\206\347\256\241\347\220\206\345\221\230", nullptr));
        pushButtoncheckfeedback->setText(QCoreApplication::translate("ManagerWindow", "\346\237\245\347\234\213\347\224\250\346\210\267\345\217\215\351\246\210", nullptr));
        pushButtondishes->setText(QCoreApplication::translate("ManagerWindow", "\347\256\241\347\220\206\350\217\234\347\263\273", nullptr));
        pushButtonunsign->setText(QCoreApplication::translate("ManagerWindow", "\351\200\200\345\207\272\347\231\273\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("ManagerWindow", "\346\234\200\345\220\216\347\231\273\345\205\245\346\227\266\351\227\264\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManagerWindow", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2671", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2672", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2673", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2674", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButtonsnew->setText(QCoreApplication::translate("ManagerWindow", "\346\267\273\345\212\240\347\256\241\347\220\206\345\221\230", nullptr));
        pushButtonbacksave->setText(QCoreApplication::translate("ManagerWindow", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247\345\271\266\344\277\235\345\255\230", nullptr));
        pushButtonbacksave_2->setText(QCoreApplication::translate("ManagerWindow", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247\345\271\266\344\277\235\345\255\230", nullptr));
        pushButtonsnewdish->setText(QCoreApplication::translate("ManagerWindow", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ManagerWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\345\271\266\350\277\224\345\233\236", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ManagerWindow", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ManagerWindow", "\346\204\217\350\247\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2671", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2672", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2673", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("ManagerWindow", "\347\224\250\346\210\2674", nullptr));

        const bool __sortingEnabled1 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setSortingEnabled(__sortingEnabled1);

        label->setText(QCoreApplication::translate("ManagerWindow", "\345\275\223\345\211\215\346\204\217\350\247\201\346\235\241\346\225\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerWindow: public Ui_ManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
