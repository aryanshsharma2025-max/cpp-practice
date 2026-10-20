#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
    }

    cout << "Alphabets = " << alphabets << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;

    return 0;
}