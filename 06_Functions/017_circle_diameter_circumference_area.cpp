#include <iostream>
using namespace std;

double getDiameter(double r) {
    return 2 * r;
}

double getCircumference(double r) {
    return 2 * 3.14159 * r;
}

double getArea(double r) {
    return 3.14159 * r * r;
}

int main() {
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Diameter: " << getDiameter(radius) << endl;
    cout << "Circumference: " << getCircumference(radius) << endl;
    cout << "Area: " << getArea(radius) << endl;

    return 0;
}
