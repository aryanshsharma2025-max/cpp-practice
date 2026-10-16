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

    cout << "Enter number of right rotations: ";
    cin >> rotations;
    rotations = rotations % n;

    for (int r = 0; r < rotations; r++)
    {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
