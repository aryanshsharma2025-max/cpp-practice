#include <iostream>
using namespace std;

int sumEven(int start, int end) {
    if (start > end) return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 2, end);
    return sumEven(start + 1, end);
}

int sumOdd(int start, int end) {
    if (start > end) return 0;
    if (start % 2 != 0)
        return start + sumOdd(start + 2, end);
    return sumOdd(start + 1, end);
}

int main() {
    int lower, upper;
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Sum of even numbers = " << sumEven(lower, upper) << endl;
    cout << "Sum of odd numbers = " << sumOdd(lower, upper) << endl;

    return 0;
}
