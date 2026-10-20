#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int minFreq = str.length() + 1;
    char minChar;

    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;

        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count < minFreq)
        {
            minFreq = count;
            minChar = str[i];
        }
    }

    cout << "Lowest frequency character: " << minChar << endl;
    cout << "Frequency: " << minFreq << endl;

    return 0;
}