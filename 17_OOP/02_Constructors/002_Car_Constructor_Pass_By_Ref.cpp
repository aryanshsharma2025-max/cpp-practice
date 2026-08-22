#include <iostream>
using namespace std;

class car
{
public:
    string name;
    int model;
    int price;
    string type;

    car(string n, int p, int m)
    {
        name = n;
        price = p;
        model = m;
    }
};

void change(car &c)
{
    c.name = "Audi";
}

int main()
{
    car c1("BMW", 10000000, 2026);
    cout << "Car Name: " << c1.name << " | Price: " << c1.price << " | Model: " << c1.model << endl;
    change(c1);
    cout << "After change(): " << c1.name << endl;
    return 0;
}
