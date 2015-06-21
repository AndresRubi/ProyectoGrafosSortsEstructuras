#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <qelapsedtimer.h>

class BubbleSort
{
public:
    BubbleSort();
    QElapsedTimer timer;
    qint64 elapse;
    qint64 GetMilliSecs(){return elapse;}
    void FunctionBubbleSort(int *arr, int tamano);

};

#endif // BUBBLESORT_H
