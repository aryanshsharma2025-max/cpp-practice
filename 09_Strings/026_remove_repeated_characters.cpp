#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";
    bool visited[256] = {false};

    for (int i = 0; i < str.length(); i++) {
        unsigned char c = str[i];
        if (!visited[c]) {
            visited[c] = true;
            result += str[i];
        }
    }

    cout << "String after removing repeated characters: " << result << endl;
    return 0;
}
