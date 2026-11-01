#include <iostream>
using namespace std;

void printNatural(int current, int n) {
    if (current > n) return;
    cout << current << " ";
    printNatural(current + 1, n);
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << ": ";
    printNatural(1, n);
    cout << endl;

    return 0;
}
