/********************************************************************************
** Form generated from reading UI file 'sorts.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTS_H
#define UI_SORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sorts
{
public:
    QPushButton *pushButtonBubbleSort;
    QLCDNumber *lcdNumberBubbleSort;
    QProgressBar *progressBarSorts;
    QPushButton *pushButton;
    QPushButton *pushButtonHeap;
    QPushButton *pushButtonQuick;
    QLCDNumber *lcdNumberBucketSort;
    QLCDNumber *lcdNumberHeapSort;
    QLCDNumber *lcdNumberQuickSort;
    QPushButton *pushLoadArray;
    QSpinBox *spinBoxCantidad;
    QListWidget *listWidgetArrays;
    QListWidget *listWidgetBubble;
    QListWidget *listWidgetBucket;
    QListWidget *listWidgetHeap;
    QListWidget *listWidgetQuick;
    QPushButton *pushButtonMerge;
    QListWidget *listWidgetMerge;
    QLCDNumber *lcdNumberMergeSort;
    QPushButton *pushButtonRun;
    QLabel *label;

    void setupUi(QWidget *Sorts)
    {
        if (Sorts->objectName().isEmpty())
            Sorts->setObjectName(QStringLiteral("Sorts"));
        Sorts->resize(581, 433);
        pushButtonBubbleSort = new QPushButton(Sorts);
        pushButtonBubbleSort->setObjectName(QStringLiteral("pushButtonBubbleSort"));
        pushButtonBubbleSort->setGeometry(QRect(30, 110, 101, 41));
        lcdNumberBubbleSort = new QLCDNumber(Sorts);
        lcdNumberBubbleSort->setObjectName(QStringLiteral("lcdNumberBubbleSort"));
        lcdNumberBubbleSort->setGeometry(QRect(460, 110, 81, 41));
        lcdNumberBubbleSort->setLineWidth(1);
        lcdNumberBubbleSort->setSmallDecimalPoint(false);
        lcdNumberBubbleSort->setDigitCount(6);
        lcdNumberBubbleSort->setProperty("value", QVariant(0));
        progressBarSorts = new QProgressBar(Sorts);
        progressBarSorts->setObjectName(QStringLiteral("progressBarSorts"));
        progressBarSorts->setGeometry(QRect(460, 30, 118, 23));
        progressBarSorts->setValue(24);
        pushButton = new QPushButton(Sorts);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 160, 101, 41));
        pushButtonHeap = new QPushButton(Sorts);
        pushButtonHeap->setObjectName(QStringLiteral("pushButtonHeap"));
        pushButtonHeap->setGeometry(QRect(30, 210, 101, 41));
        pushButtonQuick = new QPushButton(Sorts);
        pushButtonQuick->setObjectName(QStringLiteral("pushButtonQuick"));
        pushButtonQuick->setGeometry(QRect(30, 260, 101, 41));
        lcdNumberBucketSort = new QLCDNumber(Sorts);
        lcdNumberBucketSort->setObjectName(QStringLiteral("lcdNumberBucketSort"));
        lcdNumberBucketSort->setGeometry(QRect(460, 160, 81, 41));
        lcdNumberHeapSort = new QLCDNumber(Sorts);
        lcdNumberHeapSort->setObjectName(QStringLiteral("lcdNumberHeapSort"));
        lcdNumberHeapSort->setGeometry(QRect(460, 210, 81, 41));
        lcdNumberQuickSort = new QLCDNumber(Sorts);
        lcdNumberQuickSort->setObjectName(QStringLiteral("lcdNumberQuickSort"));
        lcdNumberQuickSort->setGeometry(QRect(460, 260, 81, 41));
        pushLoadArray = new QPushButton(Sorts);
        pushLoadArray->setObjectName(QStringLiteral("pushLoadArray"));
        pushLoadArray->setGeometry(QRect(30, 30, 101, 71));
        spinBoxCantidad = new QSpinBox(Sorts);
        spinBoxCantidad->setObjectName(QStringLiteral("spinBoxCantidad"));
        spinBoxCantidad->setGeometry(QRect(130, 30, 331, 27));
        spinBoxCantidad->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxCantidad->setMaximum(500000000);
        listWidgetArrays = new QListWidget(Sorts);
        listWidgetArrays->setObjectName(QStringLiteral("listWidgetArrays"));
        listWidgetArrays->setGeometry(QRect(130, 60, 331, 41));
        listWidgetArrays->setFlow(QListView::LeftToRight);
        listWidgetBubble = new QListWidget(Sorts);
        listWidgetBubble->setObjectName(QStringLiteral("listWidgetBubble"));
        listWidgetBubble->setGeometry(QRect(130, 110, 331, 41));
        listWidgetBubble->setFlow(QListView::LeftToRight);
        listWidgetBucket = new QListWidget(Sorts);
        listWidgetBucket->setObjectName(QStringLiteral("listWidgetBucket"));
        listWidgetBucket->setGeometry(QRect(130, 160, 331, 41));
        listWidgetBucket->setFlow(QListView::LeftToRight);
        listWidgetHeap = new QListWidget(Sorts);
        listWidgetHeap->setObjectName(QStringLiteral("listWidgetHeap"));
        listWidgetHeap->setGeometry(QRect(130, 210, 331, 41));
        listWidgetHeap->setFlow(QListView::LeftToRight);
        listWidgetQuick = new QListWidget(Sorts);
        listWidgetQuick->setObjectName(QStringLiteral("listWidgetQuick"));
        listWidgetQuick->setGeometry(QRect(130, 260, 331, 41));
        listWidgetQuick->setFlow(QListView::LeftToRight);
        pushButtonMerge = new QPushButton(Sorts);
        pushButtonMerge->setObjectName(QStringLiteral("pushButtonMerge"));
        pushButtonMerge->setGeometry(QRect(30, 310, 101, 41));
        listWidgetMerge = new QListWidget(Sorts);
        listWidgetMerge->setObjectName(QStringLiteral("listWidgetMerge"));
        listWidgetMerge->setGeometry(QRect(130, 310, 331, 41));
        listWidgetMerge->setFlow(QListView::LeftToRight);
        lcdNumberMergeSort = new QLCDNumber(Sorts);
        lcdNumberMergeSort->setObjectName(QStringLiteral("lcdNumberMergeSort"));
        lcdNumberMergeSort->setGeometry(QRect(460, 310, 81, 41));
        pushButtonRun = new QPushButton(Sorts);
        pushButtonRun->setObjectName(QStringLiteral("pushButtonRun"));
        pushButtonRun->setGeometry(QRect(460, 60, 85, 41));
        label = new QLabel(Sorts);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(530, 120, 59, 17));

        retranslateUi(Sorts);

        QMetaObject::connectSlotsByName(Sorts);
    } // setupUi

    void retranslateUi(QWidget *Sorts)
    {
        Sorts->setWindowTitle(QApplication::translate("Sorts", "Form", 0));
        pushButtonBubbleSort->setText(QApplication::translate("Sorts", "Bubble Sort", 0));
        pushButton->setText(QApplication::translate("Sorts", "Bucket Sort", 0));
        pushButtonHeap->setText(QApplication::translate("Sorts", "Heap Sort", 0));
        pushButtonQuick->setText(QApplication::translate("Sorts", "Quick Sort", 0));
        pushLoadArray->setText(QApplication::translate("Sorts", "Cargar Arreglo", 0));
        pushButtonMerge->setText(QApplication::translate("Sorts", "Merge Sort", 0));
        pushButtonRun->setText(QApplication::translate("Sorts", "GO!", 0));
        label->setText(QApplication::translate("Sorts", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Sorts: public Ui_Sorts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTS_H
