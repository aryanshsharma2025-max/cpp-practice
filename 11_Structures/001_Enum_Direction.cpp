#include <iostream>
using namespace std;

enum direction
{
    north,
    south,
    east,
    west
};

int main()
{
    direction dir = east;
    cout << "Direction: " << dir << endl;
    return 0;
}
