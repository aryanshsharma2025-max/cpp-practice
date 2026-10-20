#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    bool palindrome = true;

    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}