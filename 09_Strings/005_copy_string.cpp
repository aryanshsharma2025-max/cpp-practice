#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    str1 = str2;
    cout << "After copying, the first string is: " << str1 << endl;
    return 0;
}