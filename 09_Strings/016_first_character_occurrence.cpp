#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    char ch;
    int pos = -1;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to search: ";
    cin >> ch;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "First occurrence at index: " << pos;
    else
        cout << "Character not found";

    return 0;
}