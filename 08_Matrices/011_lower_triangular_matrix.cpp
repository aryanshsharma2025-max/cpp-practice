#include <iostream>
using namespace std;
int main(){
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
    cout << "The Lower triangular matrix is: " << endl;
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols ; j++)
        {
            if(i < j)
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
    return 0;
}