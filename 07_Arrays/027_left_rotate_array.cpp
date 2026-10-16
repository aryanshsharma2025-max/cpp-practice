#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, rotations;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of left rotations: ";
    cin >> rotations;
    rotations = rotations % n;

    for (int r = 0; r < rotations; r++)
    {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
