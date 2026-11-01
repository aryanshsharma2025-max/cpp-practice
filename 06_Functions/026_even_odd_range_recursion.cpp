#include <iostream>
using namespace std;

void printEven(int start, int end) {
    if (start > end) return;
    if (start % 2 == 0) cout << start << " ";
    printEven(start + 1, end);
}

void printOdd(int start, int end) {
    if (start > end) return;
    if (start % 2 != 0) cout << start << " ";
    printOdd(start + 1, end);
}

int main() {
    int lower, upper;
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Even numbers: ";
    printEven(lower, upper);
    cout << endl;

    cout << "Odd numbers: ";
    printOdd(lower, upper);
    cout << endl;

    return 0;
}
