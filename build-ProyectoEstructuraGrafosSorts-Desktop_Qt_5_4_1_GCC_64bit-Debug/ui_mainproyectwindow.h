/********************************************************************************
** Form generated from reading UI file 'mainproyectwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPROYECTWINDOW_H
#define UI_MAINPROYECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainProyectWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainProyectWindow)
    {
        if (MainProyectWindow->objectName().isEmpty())
            MainProyectWindow->setObjectName(QStringLiteral("MainProyectWindow"));
        MainProyectWindow->resize(400, 300);
        menuBar = new QMenuBar(MainProyectWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MainProyectWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainProyectWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainProyectWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(MainProyectWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainProyectWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainProyectWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainProyectWindow->setStatusBar(statusBar);

        retranslateUi(MainProyectWindow);

        QMetaObject::connectSlotsByName(MainProyectWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainProyectWindow)
    {
        MainProyectWindow->setWindowTitle(QApplication::translate("MainProyectWindow", "MainProyectWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainProyectWindow: public Ui_MainProyectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROYECTWINDOW_H
