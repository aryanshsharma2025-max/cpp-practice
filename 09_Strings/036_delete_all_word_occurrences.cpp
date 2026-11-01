#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter word to delete: ";
    cin >> word;

    size_t pos = str.find(word);
    while (pos != string::npos) {
        str.erase(pos, word.length());
        pos = str.find(word);
    }

    cout << "String after deleting all occurrences: " << str << endl;
    return 0;
}
