#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = '*';
    }

    cout << "String after conversion: " << str;
    return 0;
}
