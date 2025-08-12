/*
    Problem Statement:
    Write a C++ program to find the factorial of a given number.

    File Name: 005_factorial.cpp

    How to Compile:
        g++ 005_factorial.cpp -o factorial

    How to Execute:
        ./factorial
*/

#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n)
{
    int fact = 1;

    // TODO: Write your logic here to calculate factorial
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n = 5;  // You can change this value to test other inputs
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
