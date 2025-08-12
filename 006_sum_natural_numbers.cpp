/*
    Problem Statement:
    Write a C++ program to find the sum of the first N natural numbers.

    File Name: 006_sum_natural_numbers.cpp

    How to Compile:
        g++ 006_sum_natural_numbers.cpp -o sum_natural

    How to Execute:
        ./sum_natural
*/

#include <iostream>
using namespace std;

int main() {
    int N = 10;  // Change this value to compute sum for different N
    int sum = 0;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "Sum of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
