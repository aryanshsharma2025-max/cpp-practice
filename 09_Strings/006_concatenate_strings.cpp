#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string; ";
    getline(cin , str2);
    string concatenatedString = str1 + str2;
    cout << "The concatenated string is: " << concatenatedString << endl;
    return 0;
}