#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];
    cout<< "Enter the elements of the matrix: ";
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }   
    int temp;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j)
            {
                temp = a[i][j];
                a[i][j] = a[i][cols - 1 - j];
                a[i][cols - 1 - j] = temp;
            }
        }
    }
    cout << "The matrix after interchanging the diagonals is: " << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}