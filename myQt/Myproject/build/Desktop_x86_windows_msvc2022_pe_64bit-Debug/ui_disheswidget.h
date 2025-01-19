/********************************************************************************
** Form generated from reading UI file 'disheswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHESWIDGET_H
#define UI_DISHESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DishesWidget
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DishesWidget)
    {
        if (DishesWidget->objectName().isEmpty())
            DishesWidget->setObjectName("DishesWidget");
        DishesWidget->resize(800, 600);
        centralwidget = new QWidget(DishesWidget);
        centralwidget->setObjectName("centralwidget");
        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setForeground(brush);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_2->rowCount() < 4)
            tableWidget_2->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignJustify|Qt::AlignBottom);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 0, __qtablewidgetitem8);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(30, 90, 741, 381));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);
        tableWidget_2->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200")});
        font.setPointSize(10);
        tableWidget_2->setFont(font);
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
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(90);
        tableWidget_2->horizontalHeader()->setHighlightSections(true);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(true);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(70);
        tableWidget_2->verticalHeader()->setHighlightSections(true);
        tableWidget_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->verticalHeader()->setStretchLastSection(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 50, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 50, 40, 12));
        DishesWidget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DishesWidget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        DishesWidget->setMenuBar(menubar);
        statusbar = new QStatusBar(DishesWidget);
        statusbar->setObjectName("statusbar");
        DishesWidget->setStatusBar(statusbar);

        retranslateUi(DishesWidget);

        QMetaObject::connectSlotsByName(DishesWidget);
    } // setupUi

    void retranslateUi(QMainWindow *DishesWidget)
    {
        DishesWidget->setWindowTitle(QCoreApplication::translate("DishesWidget", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DishesWidget", "\350\217\234\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DishesWidget", "\351\243\237\346\235\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DishesWidget", "\345\234\260\347\202\271(\351\244\220\345\216\205)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DishesWidget", "\345\234\260\347\202\271(\346\245\274\345\261\202)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DishesWidget", "\345\234\260\347\202\271(\347\252\227\345\217\243)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DishesWidget", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DishesWidget", "\345\205\266\344\273\226\345\261\236\346\200\247", nullptr));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("DishesWidget", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DishesWidget: public Ui_DishesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHESWIDGET_H
