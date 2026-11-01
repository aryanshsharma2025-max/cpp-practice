#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter word to remove: ";
    cin >> word;

    size_t pos = str.rfind(word);
    if (pos != string::npos) {
        str.erase(pos, word.length());
    }

    cout << "String after removing last occurrence: " << str << endl;
    return 0;
}
