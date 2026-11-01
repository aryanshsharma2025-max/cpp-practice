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
    cout << "Enter number of characters to concatenate: ";
    cin >> n;

    strncat(str1, str2, n);

    cout << "Concatenated string: " << str1 << endl;
    return 0;
}
