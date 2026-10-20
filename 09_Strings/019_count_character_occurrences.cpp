#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    cout << "Enter string: ";
    getline(cin, str);

    cout << "Enter character: ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "Occurrences of '" << ch << "' = " << count;

    return 0;
}
