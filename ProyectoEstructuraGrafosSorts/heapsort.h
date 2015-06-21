#ifndef HEAPSORT_H
#define HEAPSORT_H
using namespace std;
#include <iostream>

class HeapSort
{
public:
    HeapSort();
    void Max_Heapify(int *a, int i , int n);
    void Function_HeapSort(int *a, int n);
    void Build_MaxHeap(int *a, int n);
};

#endif // HEAPSORT_H
