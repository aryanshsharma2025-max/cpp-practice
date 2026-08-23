#include <iostream>
using namespace std;
void printArr(int arr[], int n, int index = 0)
{
    if (index == n)
    {
        return;
    }
    cout << arr[index] << " ";
    printArr(arr, n, index + 1);
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    printArr(arr, n);
    return 0;
}