#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string word = "";

    for(int i = str.length() - 1; i >= 0; i--) {
        if(str[i] == ' ') {
            cout << word << " ";
            word = "";
        }
        else {
            word = str[i] + word;
        }
    }

    cout << word;

    return 0;
}