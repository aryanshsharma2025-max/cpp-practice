#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n && n > 0);
}

void printPerfectNumbers(int lower, int upper) {
    cout << "Perfect numbers between " << lower << " and " << upper << " are: ";
    for (int i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int lower, upper;
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    printPerfectNumbers(lower, upper);

    return 0;
}
