#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "Enter the second string: ";
    cin.getline(str2, 100);
    char *ptr1 = str1;
    char *ptr2 = str2;
    while(*ptr1 != '\0' && *ptr2 != '\0')
    {
        if(*ptr1 != *ptr2)
        {
            break;
        }
        ptr1++;
        ptr2++;
    }
    if(*ptr1 == '\0' && *ptr2 == '\0')
    {
        cout << "The two strings are equal." << endl;
    }
    else
    {
        cout << "The two strings are not equal." << endl;
    }
    return 0;
}