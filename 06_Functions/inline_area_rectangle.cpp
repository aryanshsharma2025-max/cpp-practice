#include <iostream>
using namespace std;

inline float areaRectangle(float length, float width)
{
    return length * width;
}

int main()
{
    float length, width;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << areaRectangle(length, width) << endl;
    return 0;
}
