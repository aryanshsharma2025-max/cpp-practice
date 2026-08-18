#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            cout << "Not Palindrome";
            return 0;
        }
    }
    cout << "Palindrome";
    return 0;
}
