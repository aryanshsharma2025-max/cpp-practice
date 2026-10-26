#include <iostream>
using namespace std;

int main() {
    int arr1[5], arr2[5];

    int *src = arr1;  
    int *dest = arr2;  

    cout << "Enter 5 elements: ";
    
    for(int i = 0; i < 5; i++) {
        cin >> *(src + i);
    }

    for(int i = 0; i < 5; i++) {
        *(dest + i) = *(src + i);
    }

    cout << "Copied array elements are: ";
    
    for(int i = 0; i < 5; i++) {
        cout << *(dest + i) << " ";
    }

    return 0;
}