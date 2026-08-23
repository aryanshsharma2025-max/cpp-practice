#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }

    void display()
    {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1(10, 15);
    cout << "Original ";
    p1.display();

    Point p2 = p1;
    cout << "Copied ";
    p2.display();

    return 0;
}
