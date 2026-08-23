#include <iostream>
using namespace std;

class SimpleInterest
{
    float principal;
    int time;
    float rate;

public:
    SimpleInterest(float p, int t, float r = 5.0)
    {
        principal = p;
        time = t;
        rate = r;
    }

    void calculateInterest()
    {
        float si = (principal * rate * time) / 100;
        cout << "Principal: " << principal << ", Time: " << time
             << " yrs, Rate: " << rate << "% -> Simple Interest: " << si << endl;
    }
};

int main()
{
    SimpleInterest si1(10000, 2);
    cout << "Using default rate:" << endl;
    si1.calculateInterest();

    SimpleInterest si2(10000, 2, 8.5);
    cout << "\nUsing custom rate:" << endl;
    si2.calculateInterest();

    return 0;
}
