#include <iostream>
using namespace std;

class Box
{
    int length, width, height;

public:
    // Default constructor
    Box()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    // Parameterized constructor (Cube: 1 parameter)
    Box(int side)
    {
        length = width = height = side;
    }

    // Parameterized constructor (Cuboid: 3 parameters)
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
    Box b1;            // Calls default constructor
    Box b2(5);         // Calls single parameter constructor (cube)
    Box b3(3, 4, 5);   // Calls three parameter constructor (cuboid)

    cout << "Default Box Volume: " << b1.volume() << endl;
    cout << "Cube Volume (side = 5): " << b2.volume() << endl;
    cout << "Cuboid Volume (3, 4, 5): " << b3.volume() << endl;

    return 0;
}

