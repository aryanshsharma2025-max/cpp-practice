#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int caseInsensitiveCompare(string s1, string s2) {
    int len = min(s1.length(), s2.length());
    for (int i = 0; i < len; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 != c2) {
            return c1 - c2;
        }
    }
    return s1.length() - s2.length();
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    int res = caseInsensitiveCompare(str1, str2);
    if (res == 0) {
        cout << "Strings are equal (case-insensitive)." << endl;
    } else if (res > 0) {
        cout << "First string is greater (case-insensitive)." << endl;
    } else {
        cout << "First string is smaller (case-insensitive)." << endl;
    }

    return 0;
}
