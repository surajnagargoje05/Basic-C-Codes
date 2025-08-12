/*
    Problem Statement:
    Write a C++ program to remove all occurrences of a specific 
    character from a given string without using library 
    functions like `erase()` or `remove()`.

    File Name: 003_remove_specific_char.cpp

    How to Compile:
        g++ 003_remove_specific_char.cpp -o remove_char

    How to Execute:
        ./remove_char
*/

#include <iostream>
using namespace std;

int main(){
    string str = "Suraj Nagargoje is writing code";
    char charToRemove = 'a';
    string result = "";

    // Loop through each character in the string
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != charToRemove){
            result = result+str[i];
        }
    }

    cout << "Original String: " << str << endl;
    cout << "After removing '" << charToRemove << "': " << result << endl;

    return 0;
}
