#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[100];

    cout << "Enter main string: ";
    cin.getline(str, 100);
    cout << "Enter substring to search: ";
    cin.getline(sub, 100);

    char *found = strstr(str, sub);
    if (found != NULL) {
        cout << "Substring found at index: " << (found - str) << endl;
        cout << "Substring onwards: " << found << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
