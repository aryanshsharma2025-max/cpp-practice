#include <iostream>
using namespace std;
void alpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an alphabet character." << endl;
    }
    else
    {
        cout << ch << " is Not an alphabet character. " << endl;
    }
}
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    alpha(ch);
}