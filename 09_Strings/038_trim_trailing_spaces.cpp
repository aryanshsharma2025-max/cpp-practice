#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int end = str.length() - 1;
    while (end >= 0 && (str[end] == ' ' || str[end] == '\t')) {
        end--;
    }
    str = str.substr(0, end + 1);

    cout << "String after trimming trailing spaces: '" << str << "'" << endl;
    return 0;
}
