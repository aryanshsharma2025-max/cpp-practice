#include<iostream>
using namespace std;
int main ()
{
    int arr[3][3];
    int *ptr = &arr[0][0];
    cout << "Enter the elements of 3 x 3 array: ";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin >> *(ptr + (i * 3) + j);
        }
    }
    cout << "The elements of 3 x 3 array are: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j< 3;j++){
            cout << *(ptr + (i * 3) + j) << " ";
        }
        cout << endl;
    }
    return 0;
}