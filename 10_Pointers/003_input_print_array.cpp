#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 array elements: ";
    
    for(int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }

    cout << "Array elements are: ";

    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}