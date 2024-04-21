# Data Structures and Algorithms Homework - Bucket Sort

This repository contains a homework assignment for a Data Structures and Algorithms course. The program demonstrates the implementation of the bucket sort algorithm, which distributes elements into buckets and then sorts those buckets individually.

## Implementation Details

The program defines two primary functions:
- `insertionSort()`: A function to sort an array using the insertion sort algorithm. It's utilized to sort individual buckets in the bucket sort process.
- `main()`: The entry point of the program, which initializes an array with random numbers, applies the bucket sort algorithm, and outputs the sorted array.

### Bucket Sort Algorithm
Bucket sort, or bin sort, is a distribution sort algorithm that works by partitioning an array into a number of buckets. Each bucket is then sorted individually, either using a different sorting algorithm, or by recursively applying the bucket sort algorithm.

In this implementation:
- We initialize an array of `size` 100 with random integers ranging from 0 to 99.
- The program outputs the unsorted array.
- We create a two-dimensional array, `buckets`, with `range` as the number of buckets and `size` as the maximum number of elements a bucket can hold.
- We also create an array `count` to keep track of the number of elements in each bucket.
- The main array elements are distributed into their corresponding buckets based on their value.
- Each bucket is sorted using the `insertionSort()` function.
- The sorted elements are gathered back into the original array.
- The program outputs the sorted array.

## Usage

To compile and run the program:
```bash
g++ -o bucketSort bucketSort.cpp
./bucketSort
