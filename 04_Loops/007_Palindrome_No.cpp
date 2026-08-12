#include <iostream>
using namespace std;
int main()
{
    int num, original, rev = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (original == rev)
    {
        cout << original << " is a palindrome number.";
    }
    else
    {
        cout << original << " is not a palindrome number.";
    }
    return 0;
}