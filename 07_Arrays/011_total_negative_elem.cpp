#include <iostream>
using namespace std;

int main() {
    int arr[50], n, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }

    cout << "Total negative elements = " << count;
    return 0;
}
