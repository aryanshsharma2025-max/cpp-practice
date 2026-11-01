#include <iostream>
using namespace std;

class A
{
public:
    static int x;
};

int A::x = 10;

int main()
{
    cout << "Value of static member x using scope resolution: " << A::x << endl;
    return 0;
}
