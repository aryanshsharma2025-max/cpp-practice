#include<iostream>
using namespace std;

class A
{
    int a;

    public:
        int b;
        void get_ab();
        int get_a(void);
        void show_a(void);
};

class B : public A
{
    int c;

    public:
        void add();
        void display_b();
        int get_c();
};

class C : public B
{
    int d;

    public:
        void multiply();
        void display_c();
};

void A :: get_ab(void)
{
    a = 5;
    b = 10;
}

int A :: get_a()
{
    return a;
}

void A :: show_a()
{
    cout << "a = " << a << "\n";
}

void B :: add()
{
    c = b + get_a();
}

int B :: get_c()
{
    return c;
}

void B :: display_b()
{
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
}

void C :: multiply()
{
    d = get_c() * get_a();
}

void C :: display_c()
{
    cout << "d = " << d << "\n";
}

int main()
{
    C obj;

    obj.get_ab();
    obj.add();
    obj.multiply();

    obj.show_a();
    obj.display_b();
    obj.display_c();

    return 0;
}