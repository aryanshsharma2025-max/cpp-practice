#include <iostream>
using namespace std;
void ascii(char c)
{
    int ascii = c;
    cout << "ASCII value of " << c << " is " << ascii;
}
int main()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;
    ascii(c);
    return 0;
}