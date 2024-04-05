# Implementation of various sorting algorithms in C++.

## Array

**Description**: The `Array` class provides definitions and implementations related to arrays, offering functionalities for array manipulation, such as creating arrays, accessing elements, and modifying array contents.

**Code**:
- Header file: [array.h](Array/array.h)
- Implementation file: [array.cpp](Array/array.cpp)

---

## Menu

**Description**: The `Menu` class facilitates user interaction by presenting an interactive menu that allows users to choose sorting algorithms and input data.

**Code**:
- Header file: [menu.h](Menu/menu.h)
- Implementation file: [menu.cpp](Menu/menu.cpp)

---

## Test

**Description**: The `Test` class contains functions for testing the sorting algorithms, verifying their correctness and efficiency under various scenarios.

**Code**:
- Header file: [test.h](Test/test.h)
- Implementation file: [test.cpp](Test/test.cpp)

---

## Time

**Description**: The `Time` class includes functions for measuring the execution time of sorting algorithms, providing insights into their efficiency and performance.

**Code**:
- Header file: [time.h](Time/time.h)
- Implementation file: [time.cpp](Time/time.cpp)

---

## Cheap Sort

**Code**:
- Header file: [cheap_sort.h](Sorts/Cheap_Sort/cheap_sort.h)
- Implementation file: [cheap_sort.cpp](Sorts/Cheap_Sort/cheap_sort.cpp)

**Description**: Cheap Sort is a simple sorting algorithm that repeatedly iterates through the list, compares adjacent elements, and swaps them if they are in the wrong order.

**Conclusion**: While Cheap Sort is straightforward to implement, it is not efficient for large datasets due to its O(n^2) time complexity.

---

## Insert Sort

**Code**:
- Header file: [insert_sort.h](Sorts/Insert_Sort/insert_sort.h)
- Implementation file: [insert_sort.cpp](Sorts/Insert_Sort/insert_sort.cpp)

**Description**: Insert Sort works by building a sorted array one element at a time, iterating through the list and shifting elements as necessary to find the correct position for each element.

**Conclusion**: Insert Sort performs well for small datasets or nearly sorted arrays but becomes inefficient for larger datasets due to its O(n^2) time complexity.

---

## Quick Sort

**Code**:
- Header file: [quick_sort.h](Sorts/Quick_Sort/quick_sort.h)
- Implementation file: [quick_sort.cpp](Sorts/Quick_Sort/quick_sort.cpp)

**Description**: Quick Sort is a divide-and-conquer algorithm that partitions the array into smaller subarrays, then recursively sorts each subarray.

**Conclusion**: Quick Sort offers excellent performance with an average time complexity of O(n log n), making it suitable for most practical sorting tasks.

---

## Shell Sort

**Code**:
- Header file: [shell_sort.h](Sorts/Shell_Sort/shell_sort.h)
- Implementation file: [shell_sort.cpp](Sorts/Shell_Sort/shell_sort.cpp)

**Description**: Shell Sort is an extension of Insert Sort that compares elements that are distant from each other and gradually reduces the gap between elements to be compared.

**Conclusion**: Shell Sort improves upon Insert Sort by reducing the number of comparisons, providing better performance for medium-sized datasets.

---

## Results

### Performance Comparison

- **Cheap Sort**: While easy to implement, it performs poorly on large datasets due to its quadratic time complexity.
- **Insert Sort**: Efficient for small datasets or nearly sorted arrays but becomes slow for larger datasets.
- **Quick Sort**: Offers excellent average-case performance and is suitable for most practical sorting tasks.
- **Shell Sort**: Improves upon Insert Sort by reducing the number of comparisons, providing better performance for medium-sized datasets.

Overall, the choice of sorting algorithm depends on the size and nature of the dataset. Quick Sort is often a good default choice due to its balanced performance. However, for specific use cases, other algorithms might be more appropriate.
