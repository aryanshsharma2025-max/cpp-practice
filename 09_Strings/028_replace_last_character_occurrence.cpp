#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char oldChar, newChar;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to replace: ";
    cin >> oldChar;
    cout << "Enter replacement character: ";
    cin >> newChar;

    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == oldChar) {
            str[i] = newChar;
            break;
        }
    }

    cout << "String after replacing last occurrence: " << str << endl;
    return 0;
}
