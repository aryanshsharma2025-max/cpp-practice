#include <iostream>
using namespace std;

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

    int largest = arr[0], second = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if (second == -1)
        cout << "No second largest element (all elements equal)";
    else
        cout << "Second largest element = " << second;

    return 0;
}
