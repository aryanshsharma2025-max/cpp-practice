#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter string: ";
    getline(cin, str);

    cout << "Enter character to search: ";
    cin >> ch;

    bool found = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            cout << "Character found at index: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Character not found";
    }

    return 0;
}