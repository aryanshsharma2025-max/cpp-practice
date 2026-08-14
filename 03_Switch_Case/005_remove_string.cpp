#include <iostream>
#include <string>
using namespace std;

string vowels(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

            break;
        default:
            result += str[i];
        }
    }
    return result;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = vowels(input);
    cout << "string without vowels: " << output << endl;
    return 0;
}