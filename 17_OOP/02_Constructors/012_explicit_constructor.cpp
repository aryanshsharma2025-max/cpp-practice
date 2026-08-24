#include <iostream>
using namespace std;

class Distance
{
    int meters;

public:
    explicit Distance(int m)
    {
        meters = m;
    }

    void display() const
    {
        cout << meters << " meters (" << (meters / 1000.0) << " km)" << endl;
    }
};

void showDistance(Distance d)
{
    cout << "Distance received: ";
    d.display();
}

int main()
{
    Distance d1(500);
    cout << "d1: ";
    d1.display();

    Distance d2 = Distance(1500);
    cout << "d2: ";
    d2.display();

    showDistance(d1);
    showDistance(Distance(3000));

    return 0;
}
