#include "bubblesort.h"

BubbleSort::BubbleSort()
{
    timer.start();
}

void BubbleSort::FunctionBubbleSort(int *arr, int tamano)
{
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength =tamano;
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (arr[j+1] < arr[j])      // ascending order simply changes to <
              {
                    temp = arr[j];             // swap elements
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}
