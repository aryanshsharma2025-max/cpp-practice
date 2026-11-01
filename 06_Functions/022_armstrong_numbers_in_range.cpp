#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int r = temp % 10;
        sum += round(pow(r, digits));
        temp /= 10;
    }
    return (sum == n);
}

void printArmstrongNumbers(int lower, int upper) {
    cout << "Armstrong numbers between " << lower << " and " << upper << " are: ";
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
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

    printArmstrongNumbers(lower, upper);

    return 0;
}
