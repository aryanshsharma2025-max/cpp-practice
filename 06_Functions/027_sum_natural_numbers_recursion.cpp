#include <iostream>
using namespace std;

int sumNatural(int n) {
    if (n <= 1) return n;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum of natural numbers from 1 to " << n << " = " << sumNatural(n) << endl;

    return 0;
}
