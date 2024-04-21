# Data Structures and Algorithms Homework Solutions

This repository contains my solutions to homework assignments for a Data Structures and Algorithms course. Each program is a standalone example of a specific algorithm or concept in practice.

## Homework Assignments

### Question 1: Bucket Sort with Insertion Sort
In this program, I've implemented a bucket sort algorithm, which uses insertion sort to sort individual buckets. The program generates 100 random numbers and sorts them using this combined approach.
1. **Bucket Creation**: The array elements are distributed into several buckets based on their values. For instance, with values ranging from 0 to 99, each bucket might encompass a subrange of this interval. This step organizes the data into smaller groups for more manageable sorting.

2. **Sorting Buckets**: Each bucket is individually sorted using insertion sort. This sorting technique builds up the sorted array one element at a time by inserting each new element into its appropriate position within the already sorted part of the bucket. Insertion sort is particularly effective here due to its efficiency with small or mostly sorted datasets.

3. **Merging Buckets**: Finally, the sorted contents of each bucket are concatenated back into the original array, yielding a fully sorted sequence. 

This approach leverages the efficiency of insertion sort on smaller, manageable lists and the distribution capability of bucket sort for handling larger datasets, demonstrating a significant improvement in sorting performance especially for diversified data distributions.
- [BucketInsertionSort.cpp](/BucketInsertionSort.cpp)

### Question 2: Implementing Dijkstra's Algorithm Using a Min-Priority Queue
The second program is an implementation of Dijkstra's algorithm for finding the shortest path from a single source node to all other nodes in a weighted graph.

1. **Graph Representation**: The graph is represented using an adjacency list, where each node points to a list of its adjacent nodes along with the corresponding edge weights.

2. **Priority Queue**: The core of Dijkstra's algorithm involves using a priority queue (min-heap) to always process the next vertex with the smallest distance. This approach ensures that the shortest paths are found efficiently and accurately.

3. **Distance Updates**: Starting from the source vertex, the algorithm updates the distances to adjacent vertices if a shorter path is found. This update happens through the relaxation process, which involves comparing and potentially improving the known distances using the newly calculated distances through neighboring vertices.

4. **Results**: The final output lists all vertices and their minimum distance from the source, providing a comprehensive view of the shortest paths from the source to every other vertex in the graph.

This implementation is a classic example of how Dijkstra’s algorithm efficiently calculates shortest paths in a weighted graph, making it an indispensable tool in computer science.
- [DijkstrasAlgorithm.cpp](/DijkstrasAlgorithm.cpp)

### Question 3: Longest Increasing Subsequence (LIS)
The third program solves the Longest Increasing Subsequence problem using a dynamic programming approach. It includes detailed comments explaining the base case and recursive case of the algorithm.

1. **Dynamic Programming Array**: A dynamic programming technique is employed where an array `dp` is used. Each element `dp[i]` stores the length of the longest increasing subsequence ending at index `i`.

2. **Base Case**: The `dp` array is initialized such that each `dp[i]` starts with a value of 1, considering that the minimum subsequence length that includes just the element itself is 1.

3. **Recursive Case**: The program iterates over each element `arr[i]` of the array, and for each element, it checks all preceding elements `arr[j]` (where `j < i`). If `arr[j]` is less than `arr[i]`, it considers the possibility of extending the subsequence ending at `j` by `arr[i]` and updates `dp[i]` if this produces a longer subsequence than previously known.

4. **Determine Maximum LIS**: After filling the `dp` array, the length of the longest increasing subsequence is determined by finding the maximum value in the `dp` array.

5. **Output**: The program outputs the length of the LIS, providing insight into the structure of the input sequence.

This implementation not only calculates the length of the LIS but also provides foundational knowledge on how dynamic programming can be used to solve complex problems efficiently by breaking them down into simpler subproblems.

- [LongestIncreasingSubsequence.cpp](/LongestIncreasingSubsequence.cpp)

## Building and Running

Each program is written in C++ and can be compiled with any standard C++ compiler like g++.
