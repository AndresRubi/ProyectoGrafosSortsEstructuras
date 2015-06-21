#ifndef QUICKSORT_H
#define QUICKSORT_H


class QuickSort
{
public:
    QuickSort();
    void quick_sort(int *array, int start, int end);
    int divide(int *array, int start, int end);
};

#endif // QUICKSORT_H
