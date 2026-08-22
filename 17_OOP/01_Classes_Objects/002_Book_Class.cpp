#include <iostream>

class book
{
    char title[30];
    float price;

public:
    void getdata();
    void display();
};

void book::getdata()
{
    std::cout << "Enter Book Title: ";
    std::cin >> title;

    std::cout << "Enter Price: ";
    std::cin >> price;
}

void book::display()
{
    std::cout << "\nBook Title: " << title;
    std::cout << "\nPrice: " << price << std::endl;
}

int main()
{
    book b;
    b.getdata();
    b.display();
    return 0;
}
