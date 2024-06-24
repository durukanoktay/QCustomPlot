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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_NetworkPlot
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QCustomPlot *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetworkPlot)
    {
        if (NetworkPlot->objectName().isEmpty())
            NetworkPlot->setObjectName("NetworkPlot");
        NetworkPlot->resize(800, 600);
        centralwidget = new QWidget(NetworkPlot);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 621, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 140, 731, 361));
        NetworkPlot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetworkPlot);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 42));
        NetworkPlot->setMenuBar(menubar);
        statusbar = new QStatusBar(NetworkPlot);
        statusbar->setObjectName("statusbar");
        NetworkPlot->setStatusBar(statusbar);

        retranslateUi(NetworkPlot);

        QMetaObject::connectSlotsByName(NetworkPlot);
    } // setupUi

    void retranslateUi(QMainWindow *NetworkPlot)
    {
        NetworkPlot->setWindowTitle(QCoreApplication::translate("NetworkPlot", "NetworkPlot", nullptr));
        label->setText(QCoreApplication::translate("NetworkPlot", "Network Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkPlot: public Ui_NetworkPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKPLOT_H
