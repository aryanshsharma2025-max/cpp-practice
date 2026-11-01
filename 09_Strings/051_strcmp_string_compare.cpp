#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int res = strcmp(str1, str2);

    if (res == 0) {
        cout << "Both strings are equal." << endl;
    } else if (res > 0) {
        cout << "First string is greater than second string." << endl;
    } else {
        cout << "First string is smaller than second string." << endl;
    }

    return 0;
}
