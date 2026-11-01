#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter word to count: ";
    cin >> word;

    int count = 0;
    size_t pos = str.find(word);
    while (pos != string::npos) {
        count++;
        pos = str.find(word, pos + 1);
    }

    cout << "Total occurrences of '" << word << "' = " << count << endl;
    return 0;
}
