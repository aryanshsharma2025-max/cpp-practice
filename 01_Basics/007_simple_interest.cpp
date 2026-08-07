#include<iostream>
using namespace std;
void si(float p , float r , float t)
{
    float simple = (p*r*t)/100;
    cout << "simple interest is : " << simple;
}
int main ()
{
    int p , r , t;
    cout << "Enter principle amount : ";
    cin >> p;
    cout << "Enter rate of interest : ";
    cin >> r;
    cout << "Enter time in years : ";
    cin >> t;
    si(p , r , t);
}