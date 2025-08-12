/*
    Problem Statement:
    Write a C++ program to find the smallest and largest element in an array.

    File Name: 010_find_smallest_largest.cpp

    How to Compile:
        g++ 010_find_smallest_largest.cpp -o find_min_max

    How to Execute:
        ./find_min_max
*/

#include <iostream>
using namespace std;

// Function to find the smallest element in an array
int findSmallest(const int arr[], int size) {
    // TODO: Write your logic here to find the smallest element
    int smallest = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;  // placeholder return
}

// Function to find the largest element in an array
int findLargest(const int arr[], int size) {
    // TODO: Write your logic here to find the largest element
    int largest = arr[0];
    for(int i = 0; i < size ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;  // placeholder return
}

int main() {
    int arr[] = {12, 35, 7, 10, 99, 54};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallest(arr, size);
    int largest = findLargest(arr, size);

    cout << "Smallest element is: " << smallest << endl;
    cout << "Largest element is: " << largest << endl;

    return 0;
}
