#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    while (start < str.length() && (str[start] == ' ' || str[start] == '\t')) {
        start++;
    }
    str = str.substr(start);

    cout << "String after trimming leading spaces: '" << str << "'" << endl;
    return 0;
}
