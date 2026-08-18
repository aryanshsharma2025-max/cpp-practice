#include <iostream>
using namespace std;

int main() {
    int arr[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}
