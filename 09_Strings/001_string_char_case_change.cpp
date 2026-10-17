#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for(int i = 0; i <str.length(); i++)
    {
        for(int j = 0; j < str.length(); j++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }
    cout << "The string after changing the case of each character is: " << str << endl;
    return 0;
}