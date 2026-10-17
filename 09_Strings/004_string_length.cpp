#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int len = str.length();
    cout << "The length of the string is: " << len << endl;
    return 0;
}