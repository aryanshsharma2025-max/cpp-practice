#include <iostream>
using namespace std;
int sum(int *a , int *b)
{
    int s = *a + *b;
    return s;
}
int main()
{
    int x , y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int result = sum(ptr1 , ptr2);
    cout << "The sum of " << x << " and " << y << " is: " << result << endl;
    return 0;
}