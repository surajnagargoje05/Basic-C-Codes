#include <cstring>
#include <iostream>

using namespace std;

int main(){
    string str = "Suraj Nagargoje";
    int len = 0;

    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }

    cout << "The length of the string is: " << len << endl;

    return 0;
}