#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    cout << "The copied string is: " << str2 << endl;
    return 0;
}