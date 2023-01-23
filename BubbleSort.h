#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

/* Sort Array in place */

template <typename Type>
void BubbleSort(Type array[], int n)
{
    for (int i {n - 1}; i > 0; --i) 
    {
        for (int j {}; j < i; ++j)  
        {
            if (array[j] > array[j + 1])  std::swap(array[j], array[j + 1]);
        }
    }
}

#endif