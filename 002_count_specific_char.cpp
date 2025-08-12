/*
    Problem Statement:
    Write a C++ program to count the number of occurrences of a 
    specific character in a given string without using library 
    functions like `count()`.

    File Name: 002_count_specific_char.cpp

    How to Compile:
        g++ 002_count_specific_char.cpp -o count_char

    How to Execute:
        ./count_char
*/

#include <iostream>
using namespace std;

int main(){
    string str = "Suraj Nagargoje is writing code";
    char charToCount = 'a';
    int count = 0;

    // Loop through each character in the string
    for(int i = 0; str[i] != '\0'; i++){
        if(tolower(str[i]) == charToCount){
            count++;
        }
    }

    cout << "The character '" << charToCount 
         << "' appears " << count << " times in the string." << endl;
    
    
     return 0;
}