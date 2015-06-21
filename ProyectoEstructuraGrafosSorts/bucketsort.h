#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include <iostream>
#include <queue>
using namespace std;

class BucketSort
{
public:
    BucketSort();
    void doinsertionsortforbucket(int* input, int len);
    void Bucket_Sort(int* input, int arr_size);
    int hash(int n);
};

#endif // BUCKETSORT_H
