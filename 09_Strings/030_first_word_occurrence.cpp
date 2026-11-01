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
    if (pos != string::npos) {
        cout << "'" << word << "' first found at index: " << pos << endl;
    } else {
        cout << "'" << word << "' not found in string." << endl;
    }

    return 0;
}
