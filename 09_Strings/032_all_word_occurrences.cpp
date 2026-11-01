#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter word to search: ";
    cin >> word;

    size_t pos = str.find(word);
    if (pos == string::npos) {
        cout << "'" << word << "' not found in string." << endl;
    } else {
        cout << "'" << word << "' found at indices: ";
        while (pos != string::npos) {
            cout << pos << " ";
            pos = str.find(word, pos + 1);
        }
        cout << endl;
    }

    return 0;
}
