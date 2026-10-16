#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int index, int &maximum, int &minimum)
{
    if (index == n)
    {
        return;
    }

    if (arr[index] > maximum)
    {
        maximum = arr[index];
    }

    if (arr[index] < minimum)
    {
        minimum = arr[index];
    }

    findMaxMin(arr, n, index + 1, maximum, minimum);
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

    int maximum = arr[0], minimum = arr[0];
    findMaxMin(arr, n, 1, maximum, minimum);

    cout << "Maximum element = " << maximum << endl;
    cout << "Minimum element = " << minimum << endl;
    return 0;
}
