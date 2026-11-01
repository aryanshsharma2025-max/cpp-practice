#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    cout << "Lowercase string: " << str << endl;
    return 0;
}
