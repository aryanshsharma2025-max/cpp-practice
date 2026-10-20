#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int words = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i - 1] == ' ')) {
            words++;
        }
    }

    cout << "Total number of words = " << words << endl;

    return 0;
}