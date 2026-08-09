#include <iostream>
using namespace std;
void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an Uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a Lowercase letter." << endl;
    }
    else
    {
        cout << ch << " is not an alphabet character." << endl;
    }
}
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    check(ch);
}