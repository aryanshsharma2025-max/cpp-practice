#include <iostream>
using namespace std;

class Box
{
    int length, width, height;

public:
    Box()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(int side)
    {
        length = width = height = side;
    }

    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    int volume()
    {
        return length * width * height;
    }
};

int main()
{
    Box b1;
    Box b2(5);
    Box b3(3, 4, 5);

    cout << "Default Box Volume: " << b1.volume() << endl;
    cout << "Cube Volume (side = 5): " << b2.volume() << endl;
    cout << "Cuboid Volume (3, 4, 5): " << b3.volume() << endl;

    return 0;
}
