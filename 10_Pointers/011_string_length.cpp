#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int length = 0;
    char *ptr = str;
    while (*ptr != 0)
    {
        length++;
        ptr++;
    }
    cout << "The length of the string is: " << length << endl;
    return 0;
}