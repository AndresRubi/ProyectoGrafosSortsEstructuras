#ifndef SORTS_H
#define SORTS_H

#include <iostream>
using namespace std;

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include <QWidget>

#include "mergesort.h"
#include "bubblesort.h"
#include "bucketsort.h"
#include "heapsort.h"
#include "quicksort.h"

#include <qelapsedtimer.h>

namespace Ui {
class Sorts;
}

class Sorts : public QWidget
{
    Q_OBJECT

public:
    explicit Sorts(QWidget *parent = 0);
    ~Sorts();

    QElapsedTimer timer,tBubble,tBucket,tHeap,tQuick,tMerge;

    int *arr;
    int *arr_Bubble;
    int *arr_Bucket;
    int *arr_Heap;
    int *arr_Quick;
    int *arr_Merge;

    int Cant;
    qint64 cronos;

    QString Cantidad;

    MergeSort merge;
    QuickSort quick;
    BubbleSort bubble;
    BucketSort bucket;
    HeapSort heap;

    void SortFunction(int Quantity);


private slots:
    void on_pushButtonBubbleSort_clicked();

    void on_pushLoadArray_clicked();

    void on_pushButton_clicked();

    void on_pushButtonHeap_clicked();

    void on_pushButtonQuick_clicked();

    void on_pushButtonMerge_clicked();

    void on_pushButtonRun_clicked();

private:
    Ui::Sorts *ui;
};

#endif // SORTS_H
