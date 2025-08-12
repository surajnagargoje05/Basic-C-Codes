/*
    Problem Statement:
    Write a C++ program with two functions:
    1. Remove all non-alphabet characters from a given string.
    2. Remove all alphabet characters from a given string.
    Do not use library functions like `erase()`.

    File Name: 004_remove_chars.cpp

    How to Compile:
        g++ 004_remove_chars.cpp -o remove_chars

    How to Execute:
        ./remove_chars
*/

#include <iostream>
using namespace std;

// Function to keep only alphabets
string keepOnlyAlphabets(const string &str) {
    string result = "";
    for (int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            result = result + str[i];
        }
    }
    return result;
}

// Function to keep only non-alphabets
string keepOnlyNonAlphabets(const string &str) {
    string result = "";
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z'))) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str = "Suraj@123 is #coding!";

    cout << "Original String: " << str << endl;
    cout << "Only Alphabets: " << keepOnlyAlphabets(str) << endl;
    cout << "Only Non-Alphabets: " << keepOnlyNonAlphabets(str) << endl;

    return 0;
}
