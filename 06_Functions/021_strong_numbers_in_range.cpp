#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int n) {
    int temp = n, sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == n);
}

void printStrongNumbers(int lower, int upper) {
    cout << "Strong numbers between " << lower << " and " << upper << " are: ";
    for (int i = lower; i <= upper; i++) {
        if (isStrong(i)) {
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

    printStrongNumbers(lower, upper);

    return 0;
}
