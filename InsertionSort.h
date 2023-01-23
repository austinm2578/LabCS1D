#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

template <typename Type>
void InsertionSort(Type array[], const int n)
{
    Type x;
    int  j;

    for (int i {1}; i < n; ++i)
    {
        x = array[i];
        j = i - 1;

        while (x < array[j] && j >= 0) 
        {
            array[j+1] = array[j];
            --j;
        }

        array[j+1] = x;
    }
}


#endif /* INSERTION_SORT_H */