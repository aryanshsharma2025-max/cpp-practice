#include <iostream>
using namespace std;
int main()
{
    int rows , cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];
    cout << "Enter the elements of the matrix: ";
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The transpose of the matrix is: " << endl;
    for(int i = 0; i < cols ; i++){
        for(int j = 0; j < rows ; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}