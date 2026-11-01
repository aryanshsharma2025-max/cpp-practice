#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

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

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n && n > 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime number" << endl;
    else
        cout << num << " is not a Prime number" << endl;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number" << endl;
    else
        cout << num << " is not an Armstrong number" << endl;

    if (isPerfect(num))
        cout << num << " is a Perfect number" << endl;
    else
        cout << num << " is not a Perfect number" << endl;

    return 0;
}
