//
// Created by Kamil Wojcieszak on 19/03/2024.
//

#include <strstream>
#include "QuickSort.h"
#include "math.h"

int *QuickSort::sort(int *array, int left, int right) {
    if (left > right) return array;
    int m = partition(array, left, right);
    sort(array, left, m);
    sort(array, m + 1, right);
    return array;
}

int QuickSort::partition(int *array, int left, int right) {
    int pivot = array[left];
    int leftWall = left;

    for (int i = left + 1; i < right; ++i) {
        if (array[i] < pivot){
            swap()
        }
    }
}

