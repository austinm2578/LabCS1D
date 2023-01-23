#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

template <typename Type>
int BinarySearch(const Type array[], const Type x, int size)
{
    int left  { };
    int right { --size };
    int mid   { (left + right) >> 1 };
    
    while (left <= right)
    {
        if (x < array[mid]) right = --mid;
        
        else if (x > array[mid]) left = ++mid;

        else return mid;

        mid = (left + right) >> 1;
    }

    return -1;
}

#endif  /* BINARY_SEARCH_H */