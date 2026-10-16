#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns:";
    cin >> rows >> cols;
    int a[rows][cols];
    cout << "Enter the number of elements: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The Elenments of the matrix are: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j];
        }
    }
    int sum_row[rows] = {0};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum_row[i] += a[i][j];
        }
    }
    cout << "Sum of rows: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << ": " << sum_row[i] << endl;
    }
    int sum_col[cols] = {0};
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            sum_col[j] += a[i][j];
        }
    }
    cout << "Sum of columns: " << endl;
    for (int j = 0; j < cols; j++)
    {
        cout << "Column " << j + 1 << ": " << sum_col[j] << endl;
    }

    return 0;
}