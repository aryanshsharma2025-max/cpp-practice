#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseString(str);

    cout << "Reversed string: " << str << endl;
    return 0;
}
