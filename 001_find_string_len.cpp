/*
    Problem Statement:
    Write a C++ program to find the length of a string without using
    the strlen() function. The string is predefined in the program.

    File Name: 001_find_string_len.cpp

    How to Compile:
        g++ 001_find_string_len.cpp -o string_length

    How to Execute:
        ./string_length
*/

#include <cstring>
#include <iostream>

using namespace std;

int main(){
    string str = "Suraj Nagargoje";
    int len = 0;

    // Loop until null character ('\0') is reached
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }

    cout << "The length of the string is: " << len << endl;

    return 0;
}