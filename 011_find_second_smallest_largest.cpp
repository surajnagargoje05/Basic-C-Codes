/*
    Problem Statement:
    Write a C++ program to find the second smallest and second largest elements in an array.

    File Name: 011_find_second_smallest_largest.cpp

    How to Compile:
        g++ 011_find_second_smallest_largest.cpp -o find_second_min_max

    How to Execute:
        ./find_second_min_max
*/

#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

// Function to find the second smallest element in an array
int findSecondSmallest(const int arr[], int size) {
    int smallest = INT_MAX;         // Initialize smallest to max possible int
    int secondSmallest = INT_MAX;   // Initialize second smallest to max possible int

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            // Found new smallest, update secondSmallest to previous smallest
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            // Update secondSmallest if current element is between smallest and secondSmallest
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

// Function to find the second largest element in an array
int findSecondLargest(const int arr[], int size) {
    int largest = INT_MIN;          // Initialize largest to min possible int
    int secondLargest = INT_MIN;    // Initialize second largest to min possible int

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            // Found new largest, update secondLargest to previous largest
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            // Update secondLargest if current element is between largest and secondLargest
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 7, 10, 99, 54};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondSmallest = findSecondSmallest(arr, size);
    int secondLargest = findSecondLargest(arr, size);

    cout << "Second smallest element is: " << secondSmallest << endl;
    cout << "Second largest element is: " << secondLargest << endl;

    return 0;
}
