/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QPushButton *pushButtonCrearVertice;
    QLineEdit *lineEditCrearVertice;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditOrigenArista;
    QLabel *label_3;
    QLineEdit *lineEditDestinoArista;
    QLabel *label_4;
    QPushButton *pushButtonCrearArista;
    QPushButton *pushButtonEliminarArista;
    QPushButton *pushButtonEliminarVertice;
    QLineEdit *lineEditEliminarVertice;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditPeso;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QStringLiteral("Graph"));
        Graph->resize(893, 631);
        pushButtonCrearVertice = new QPushButton(Graph);
        pushButtonCrearVertice->setObjectName(QStringLiteral("pushButtonCrearVertice"));
        pushButtonCrearVertice->setGeometry(QRect(140, 50, 101, 27));
        lineEditCrearVertice = new QLineEdit(Graph);
        lineEditCrearVertice->setObjectName(QStringLiteral("lineEditCrearVertice"));
        lineEditCrearVertice->setGeometry(QRect(20, 50, 113, 27));
        label = new QLabel(Graph);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 211, 17));
        label_2 = new QLabel(Graph);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 171, 17));
        lineEditOrigenArista = new QLineEdit(Graph);
        lineEditOrigenArista->setObjectName(QStringLiteral("lineEditOrigenArista"));
        lineEditOrigenArista->setGeometry(QRect(80, 120, 113, 27));
        label_3 = new QLabel(Graph);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 120, 59, 21));
        lineEditDestinoArista = new QLineEdit(Graph);
        lineEditDestinoArista->setObjectName(QStringLiteral("lineEditDestinoArista"));
        lineEditDestinoArista->setGeometry(QRect(80, 150, 113, 27));
        label_4 = new QLabel(Graph);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 59, 21));
        pushButtonCrearArista = new QPushButton(Graph);
        pushButtonCrearArista->setObjectName(QStringLiteral("pushButtonCrearArista"));
        pushButtonCrearArista->setGeometry(QRect(22, 210, 85, 27));
        pushButtonEliminarArista = new QPushButton(Graph);
        pushButtonEliminarArista->setObjectName(QStringLiteral("pushButtonEliminarArista"));
        pushButtonEliminarArista->setGeometry(QRect(112, 210, 85, 27));
        pushButtonEliminarVertice = new QPushButton(Graph);
        pushButtonEliminarVertice->setObjectName(QStringLiteral("pushButtonEliminarVertice"));
        pushButtonEliminarVertice->setGeometry(QRect(152, 270, 101, 27));
        lineEditEliminarVertice = new QLineEdit(Graph);
        lineEditEliminarVertice->setObjectName(QStringLiteral("lineEditEliminarVertice"));
        lineEditEliminarVertice->setGeometry(QRect(32, 270, 113, 27));
        label_5 = new QLabel(Graph);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 250, 61, 20));
        label_6 = new QLabel(Graph);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 180, 59, 21));
        lineEditPeso = new QLineEdit(Graph);
        lineEditPeso->setObjectName(QStringLiteral("lineEditPeso"));
        lineEditPeso->setGeometry(QRect(80, 180, 113, 27));

        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QApplication::translate("Graph", "Form", 0));
        pushButtonCrearVertice->setText(QApplication::translate("Graph", "Insertar Vertice", 0));
        label->setText(QApplication::translate("Graph", "VERTICES", 0));
        label_2->setText(QApplication::translate("Graph", "ARISTAS", 0));
        lineEditOrigenArista->setText(QString());
        label_3->setText(QApplication::translate("Graph", "Origen", 0));
        label_4->setText(QApplication::translate("Graph", "Destino", 0));
        pushButtonCrearArista->setText(QApplication::translate("Graph", "Crear ", 0));
        pushButtonEliminarArista->setText(QApplication::translate("Graph", "Eliminar", 0));
        pushButtonEliminarVertice->setText(QApplication::translate("Graph", "Eliminar Vertice", 0));
        label_5->setText(QApplication::translate("Graph", "VERTICES", 0));
        label_6->setText(QApplication::translate("Graph", "Peso", 0));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
