/*
    Problem Statement:
    Write a C++ program to check whether a given string is a palindrome.

    File Name: 008_check_palindrome.cpp

    How to Compile:
        g++ 008_check_palindrome.cpp -o check_palindrome

    How to Execute:
        ./check_palindrome
*/

#include <iostream>
using namespace std;

// Function to check if a string is palindrome
bool isPalindrome(const string &str) {
    // TODO: Write your palindrome checking logic here
    int start = 0;
    int end = str.length() - 1;
    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true; // Placeholder return
}

int main() {
    string input = "madaqm";  // You can change this to test other strings

    if (isPalindrome(input))
        cout << input << " is a palindrome." << endl;
    else
        cout << input << " is not a palindrome." << endl;

    return 0;
}
