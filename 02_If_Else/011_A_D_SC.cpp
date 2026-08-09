#include <iostream>
using namespace std;
void character(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '-' || ch == '+' || ch == '=' || ch == '{' || ch == '}' || ch == '[' || ch == ']' || ch == ':' || ch == ';' || ch == '"' || ch == '\'' || ch == '<' || ch == '>' || ch == ',' || ch == '.' || ch == '?' || ch == '/' || ch == '\\'))
    {
        cout << "The character is valid." << endl;
    }
    else
    {
        cout << "The character is invalid." << endl;
    }
}
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    character(ch);
}