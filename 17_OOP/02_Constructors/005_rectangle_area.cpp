#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    int area()
    {
        return length * width;
    }
};

int main()
{
    int a, b;
    cout << "Enter L and W";
    cin >> a >> b;
    Rectangle r1(a, b);
    cout << "Area = " << r1.area() << endl;
    return 0;
}
