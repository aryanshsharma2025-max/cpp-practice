#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];
    int b[rows][cols];

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "The Lower triangular matrix A is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "The Lower triangular matrix B is: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            {
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "The sum of the Lower triangular matrices is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            {
                cout << a[i][j] + b[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}