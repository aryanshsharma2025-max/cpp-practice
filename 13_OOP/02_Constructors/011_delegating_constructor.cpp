#include <iostream>
#include <string>
using namespace std;

class Product
{
    string name;
    double price;
    int quantity;

public:
    Product(string n, double p, int q)
    {
        name = n;
        price = p;
        quantity = q;
        cout << "[Target Constructor] Initialized: " << name << endl;
    }

    Product(string n, double p) : Product(n, p, 1)
    {
        cout << "[Delegating 2-arg Constructor] Completed for: " << name << endl;
    }

    Product(string n) : Product(n, 0.0, 0)
    {
        cout << "[Delegating 1-arg Constructor] Completed for: " << name << endl;
    }

    void display()
    {
        cout << "Product: " << name << " | Price: Rs " << price << " | Quantity: " << quantity
             << " | Total Value: Rs " << (price * quantity) << "\n" << endl;
    }
};

int main()
{
    cout << "1. Creating product with all 3 parameters:" << endl;
    Product p1("Laptop", 75000.0, 2);
    p1.display();

    cout << "2. Creating product with 2 parameters (delegating default quantity = 1):" << endl;
    Product p2("Headphones", 2500.0);
    p2.display();

    cout << "3. Creating product with 1 parameter (delegating default price = 0, qty = 0):" << endl;
    Product p3("Sample Item");
    p3.display();

    return 0;
}
