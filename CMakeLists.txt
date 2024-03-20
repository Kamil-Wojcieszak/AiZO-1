cmake_minimum_required(VERSION 3.25)
project(AiZO_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(AiZO_1 main.cpp QuickSort/QuickSort.cpp QuickSort/QuickSort.h InsertionSort/InsertionSort.cpp InsertionSort/InsertionSort.h HeapSort/HeapSort.cpp HeapSort/HeapSort.h)
