#include <iostream>
using namespace std;
void area(int r)
{
    float area = 3.14 * r * r;
    cout << "Area of circle is: " << area;
}
int main()
{
    int r;
    cout << "enter the radius:";
    cin >> r;
    area(r);
    return 0;
}