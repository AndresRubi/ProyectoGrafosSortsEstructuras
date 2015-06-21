#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

class MergeSort
{
public:
    MergeSort();
    void merge(int, int, int, int*);
    void merge_sort(int low, int high, int* p);
    void merge(int *,int, int , int );

    void merge2(int* input, int p, int r);
    void merge_sort2(int* input, int p, int r);
};

#endif // MERGESORT_H
