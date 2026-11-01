#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    char *ptr = str;
    char *end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;
    cout << "The reversed string is: ";
    while(end >= ptr)
    {
        cout << *end;
        end--;
    }
    return 0;
}