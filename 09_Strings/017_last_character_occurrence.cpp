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

    for(int i = str.length() - 1; i >= 0; i--) {
        if(str[i] == ch) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Last occurrence at index: " << pos;
    else
        cout << "Character not found";

    return 0;
}