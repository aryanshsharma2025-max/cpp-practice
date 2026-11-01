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

    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == ch) {
            str.erase(i, 1);
            break;
        }
    }

    cout << "String after removing last occurrence: " << str << endl;
    return 0;
}
