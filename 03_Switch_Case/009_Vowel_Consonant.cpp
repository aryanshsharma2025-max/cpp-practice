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
        cout << ch << " is a Vowel." << endl;
        break;
    default:
        if (ch >= 'a' && ch <= 'z')
            cout << ch << " is a Consonant." << endl;
        else
            cout << ch << " is not an alphabet character." << endl;
    }

    return 0;
}
