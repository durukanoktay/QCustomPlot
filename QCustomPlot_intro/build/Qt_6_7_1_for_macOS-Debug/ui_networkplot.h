/********************************************************************************
** Form generated from reading UI file 'networkplot.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKPLOT_H
#define UI_NETWORKPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_NetworkPlot
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClear;
    QLabel *label;
    QPushButton *btnPlot;
    QPushButton *btnClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetworkPlot)
    {
        if (NetworkPlot->objectName().isEmpty())
            NetworkPlot->setObjectName("NetworkPlot");
        NetworkPlot->resize(788, 476);
        centralwidget = new QWidget(NetworkPlot);
        centralwidget->setObjectName("centralwidget");
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 70, 731, 311));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(50, 20, 691, 36));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnClear = new QPushButton(widget1);
        btnClear->setObjectName("btnClear");

        horizontalLayout->addWidget(btnClear);

        label = new QLabel(widget1);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        btnPlot = new QPushButton(widget1);
        btnPlot->setObjectName("btnPlot");

        horizontalLayout->addWidget(btnPlot);

        btnClose = new QPushButton(widget1);
        btnClose->setObjectName("btnClose");

        horizontalLayout->addWidget(btnClose);

        NetworkPlot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetworkPlot);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 788, 42));
        NetworkPlot->setMenuBar(menubar);
        statusbar = new QStatusBar(NetworkPlot);
        statusbar->setObjectName("statusbar");
        NetworkPlot->setStatusBar(statusbar);

        retranslateUi(NetworkPlot);
        QObject::connect(btnClose, &QPushButton::clicked, NetworkPlot, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(NetworkPlot);
    } // setupUi

    void retranslateUi(QMainWindow *NetworkPlot)
    {
        NetworkPlot->setWindowTitle(QCoreApplication::translate("NetworkPlot", "NetworkPlot", nullptr));
        btnClear->setText(QCoreApplication::translate("NetworkPlot", "Clear", nullptr));
        label->setText(QCoreApplication::translate("NetworkPlot", "Network Plot", nullptr));
        btnPlot->setText(QCoreApplication::translate("NetworkPlot", "Plot", nullptr));
        btnClose->setText(QCoreApplication::translate("NetworkPlot", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkPlot: public Ui_NetworkPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKPLOT_H
