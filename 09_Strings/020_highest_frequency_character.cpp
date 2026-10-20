#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < str.length(); i++) {
        int count = 0;

        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxChar = str[i];
        }
    }

    cout << "Highest frequency character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}