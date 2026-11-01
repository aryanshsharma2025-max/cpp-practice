#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to remove: ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            str.erase(i, 1);
            break;
        }
    }

    cout << "String after removing first occurrence: " << str << endl;
    return 0;
}
