#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of all elements = " << sum;
    return 0;
}
