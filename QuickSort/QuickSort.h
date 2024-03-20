//
// Created by Kamil Wojcieszak on 19/03/2024.
//

#pragma once


class QuickSort {
private:

    int partition(int array[], int left, int right);

    ~QuickSort();


public:
    int *sort(int array[], int left, int right);

    QuickSort();

    int medianOfThree(int *pInt, int left, int right);
};
