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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sorts
{
public:
    QTextEdit *textBubbleSort;
    QPushButton *pushButtonBubbleSort;
    QLCDNumber *lcdNumberBubbleSort;
    QProgressBar *progressBarSorts;
    QPushButton *pushButton;
    QTextEdit *textBucketSort;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextEdit *textHeapSort;
    QTextEdit *textQuickSort;
    QLCDNumber *lcdNumberBucketSort;
    QLCDNumber *lcdNumberHeapSort;
    QLCDNumber *lcdNumberQuickSort;

    void setupUi(QWidget *Sorts)
    {
        if (Sorts->objectName().isEmpty())
            Sorts->setObjectName(QStringLiteral("Sorts"));
        Sorts->resize(581, 433);
        textBubbleSort = new QTextEdit(Sorts);
        textBubbleSort->setObjectName(QStringLiteral("textBubbleSort"));
        textBubbleSort->setGeometry(QRect(130, 110, 331, 41));
        textBubbleSort->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBubbleSort->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
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
        progressBarSorts->setGeometry(QRect(400, 30, 118, 23));
        progressBarSorts->setValue(24);
        pushButton = new QPushButton(Sorts);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 160, 101, 41));
        textBucketSort = new QTextEdit(Sorts);
        textBucketSort->setObjectName(QStringLiteral("textBucketSort"));
        textBucketSort->setGeometry(QRect(130, 160, 331, 41));
        pushButton_2 = new QPushButton(Sorts);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 210, 101, 41));
        pushButton_3 = new QPushButton(Sorts);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 260, 101, 41));
        textHeapSort = new QTextEdit(Sorts);
        textHeapSort->setObjectName(QStringLiteral("textHeapSort"));
        textHeapSort->setGeometry(QRect(130, 210, 331, 41));
        textQuickSort = new QTextEdit(Sorts);
        textQuickSort->setObjectName(QStringLiteral("textQuickSort"));
        textQuickSort->setGeometry(QRect(130, 260, 331, 41));
        lcdNumberBucketSort = new QLCDNumber(Sorts);
        lcdNumberBucketSort->setObjectName(QStringLiteral("lcdNumberBucketSort"));
        lcdNumberBucketSort->setGeometry(QRect(460, 160, 81, 41));
        lcdNumberHeapSort = new QLCDNumber(Sorts);
        lcdNumberHeapSort->setObjectName(QStringLiteral("lcdNumberHeapSort"));
        lcdNumberHeapSort->setGeometry(QRect(460, 210, 81, 41));
        lcdNumberQuickSort = new QLCDNumber(Sorts);
        lcdNumberQuickSort->setObjectName(QStringLiteral("lcdNumberQuickSort"));
        lcdNumberQuickSort->setGeometry(QRect(460, 260, 81, 41));

        retranslateUi(Sorts);

        QMetaObject::connectSlotsByName(Sorts);
    } // setupUi

    void retranslateUi(QWidget *Sorts)
    {
        Sorts->setWindowTitle(QApplication::translate("Sorts", "Form", 0));
        pushButtonBubbleSort->setText(QApplication::translate("Sorts", "Bubble Sort", 0));
        pushButton->setText(QApplication::translate("Sorts", "Bucket Sort", 0));
        pushButton_2->setText(QApplication::translate("Sorts", "Heap Sort", 0));
        pushButton_3->setText(QApplication::translate("Sorts", "QuickSort", 0));
    } // retranslateUi

};

namespace Ui {
    class Sorts: public Ui_Sorts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTS_H
