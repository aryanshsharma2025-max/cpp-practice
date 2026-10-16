#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int arr[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of all elements = " << sumArray(arr, n);
    return 0;
}
