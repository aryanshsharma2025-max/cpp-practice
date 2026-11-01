#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";
    bool inSpace = false;

    int start = 0;
    while (start < str.length() && str[start] == ' ') {
        start++;
    }

    for (int i = start; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
            inSpace = false;
        } else if (!inSpace) {
            result += ' ';
            inSpace = true;
        }
    }

    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    cout << "String after removing extra spaces: '" << result << "'" << endl;
    return 0;
}
