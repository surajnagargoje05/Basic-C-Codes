/*
    Problem Statement:
    Write a C++ program to check whether a given number is prime or not.

    File Name: 007_check_prime.cpp

    How to Compile:
        g++ 007_check_prime.cpp -o check_prime

    How to Execute:
        ./check_prime
*/

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // TODO: Write your prime checking logic here
    for(int i = 2; i < n; i++){
        if((n % i) == 0){
            return false;
        }
    }
    return true;  // Placeholder return
}

int main() {
    int num = 22;  // You can change this value to test other numbers

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
