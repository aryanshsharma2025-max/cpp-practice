//Check the symmetric matrix. 
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
    int flag = 1;
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        cout << "The matrix is a symmetric matrix." << endl;
    }
    else
    {
        cout << "The matrix is not a symmetric matrix." << endl;
    }
    return 0;
}