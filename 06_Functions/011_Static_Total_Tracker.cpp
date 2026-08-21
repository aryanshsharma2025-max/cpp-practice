#include <iostream>
using namespace std;

class Item
{
    int itemCode;
    float price;

public:
    static float totalBill;
    static int totalItems;
    void getItem()
    {
        cout << "Enter Item Code: ";
        cin >> itemCode;
        cout << "Enter Item Price: ";
        cin >> price;

        totalBill += price;
        totalItems++;
    }

    void displayItem()
    {
        cout << "Item Code: " << itemCode << " | Price: Rs. " << price << endl;
    }

    void displaySummary()
    {
        cout << "Total Items Purchased: " << totalItems << endl;
        cout << "Grand Total Bill: Rs. " << totalBill << endl;
    }
};

float Item::totalBill = 0;
int Item::totalItems = 0;

int main()
{
    Item item1, item2, item3;

    cout << "--- Item 1 ---\n";
    item1.getItem();

    cout << "\n--- Item 2 ---\n";
    item2.getItem();

    cout << "\n--- Item 3 ---\n";
    item3.getItem();

    cout << "\n--- Purchased Items ---\n";
    item1.displayItem();
    item2.displayItem();
    item3.displayItem();

    item1.displaySummary();

    return 0;
}
