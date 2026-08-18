#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {45, 12, 78, 34, 23};
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Ascending order:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nDescending order:\n";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
