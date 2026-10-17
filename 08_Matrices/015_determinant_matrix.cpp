#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }
    int determinant = 1;
    for (int i = 0; i < rows; i++)
    {
        determinant *= a[i][i];
    }
    cout << "The determinant of the matrix is: " << determinant << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}