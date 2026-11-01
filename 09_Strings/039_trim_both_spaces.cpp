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

    int end = str.length() - 1;
    while (end >= start && (str[end] == ' ' || str[end] == '\t')) {
        end--;
    }

    str = str.substr(start, end - start + 1);

    cout << "String after trimming both ends: '" << str << "'" << endl;
    return 0;
}
