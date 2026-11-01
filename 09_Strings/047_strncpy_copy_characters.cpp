#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[100], destination[100];
    int n;

    cout << "Enter source string: ";
    cin.getline(source, 100);
    cout << "Enter number of characters to copy: ";
    cin >> n;

    strncpy(destination, source, n);
    destination[n] = '\0';

    cout << "Copied string: " << destination << endl;
    return 0;
}
