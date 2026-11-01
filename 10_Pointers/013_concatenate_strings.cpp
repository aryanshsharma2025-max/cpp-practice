#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string *ptr = &str;
    cout << "The entered string is: " << *ptr << endl;
    string str2;
    cout << "Enter another string to concatenate: ";
    getline(cin, str2);
    string *ptr2 = &str2;
    *ptr += *ptr2;
    cout << "The concatenated string is: " << *ptr << endl;
    return 0;
}