#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum is: " << findMax(num1, num2) << endl;
    cout << "Minimum is: " << findMin(num1, num2) << endl;

    return 0;
}
