/*
    Problem Statement:
    Write a C++ program to check whether a given number is an Armstrong number or not.

    What is an Armstrong number?
    An Armstrong number (also called a narcissistic number) is a number 
    that is equal to the sum of its own digits each raised to the power 
    of the number of digits.

    For example:
    - 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153
    - 9474 is an Armstrong number because 9^4 + 4^4 + 7^4 + 4^4 = 9474

    File Name: 009_check_armstrong.cpp

    How to Compile:
        g++ 009_check_armstrong.cpp -o check_armstrong

    How to Execute:
        ./check_armstrong
*/

#include <iostream>
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int n) {
    // TODO: Write your logic here
    int origionalNum = n;
    int sum = 0;

    // Step 1: Count the number of digits in the number
    int digits = 0;
    while (n > 0) {
        digits++;     // Increment digit count
        n /= 10;      // Remove the last digit
    }

    n = origionalNum;


    return true;  // placeholder return
}

int main() {
    int num = 153;  // Change this number to test others

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
