#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a vowel." << endl;
        break;
    default:
        if ((ch >= 'a' && ch <= 'z'))
            cout << ch << " is a consonant";
        else
            cout << "Not an alphabet";
    }
    return 0;
}