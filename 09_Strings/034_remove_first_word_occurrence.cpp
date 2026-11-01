#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter word to remove: ";
    cin >> word;

    size_t pos = str.find(word);
    if (pos != string::npos) {
        str.erase(pos, word.length());
    }

    cout << "String after removing first occurrence: " << str << endl;
    return 0;
}
