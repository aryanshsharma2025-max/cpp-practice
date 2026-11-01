#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int n;

    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    cout << "Enter number of characters to compare: ";
    cin >> n;

    int res = strncmp(str1, str2, n);
    if (res == 0) {
        cout << "First " << n << " characters of both strings are equal." << endl;
    } else if (res > 0) {
        cout << "First string is greater." << endl;
    } else {
        cout << "First string is smaller." << endl;
    }

    return 0;
}
