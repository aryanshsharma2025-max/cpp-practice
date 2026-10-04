#include<iostream>
using namespace std;

class A
{
    int a;

    public:
        void get_a();
        int show_a();
};

class B
{
    int b;

    public:
        void get_b();
        int show_b();
};

class C : public A, public B
{
    int c;

    public:
        void add();
        void display();
};

void A :: get_a()
{
    a = 10;
}

int A :: show_a()
{
    return a;
}

void B :: get_b()
{
    b = 20;
}

int B :: show_b()
{
    return b;
}

void C :: add()
{
    c = show_a() + show_b();
}

void C :: display()
{
    cout << "a = " << show_a() << "\n";
    cout << "b = " << show_b() << "\n";
    cout << "c = " << c << "\n";
}

int main()
{
    C obj;

    obj.get_a();
    obj.get_b();
    obj.add();
    obj.display();

    return 0;
}