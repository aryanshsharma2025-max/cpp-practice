#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the First String: ";
    getline(cin, str1);
    cout << " Enter the Second String: ";
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 != len2)
    {
        cout << "The strings are not anagrams." << endl;
        return 0;
    }
    int count[256] = {0};
    for (int i = 0; i < len1; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            cout << "The strings are not anagrams." << endl;
            return 0;
        }
    }
    cout << "The strings are anagrams." << endl;
    return 0;
    
}