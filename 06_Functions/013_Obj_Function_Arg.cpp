#include <iostream>
using namespace std;
class time
{
    int hrs;
    int min;

public:
    void getline(int n, int m)
    {
        hrs = n;
        min = m;
    }
    void putline(void)
    {
        cout << hrs << "hours and" << endl;
        cout << min << " minutes" << endl;
    }
    void sum(time, time);
};
void time ::sum(time t1, time t2)
{
    min = t1.min + t2.min;
    hrs = min / 60;
    min = min % 60;
    hrs = hrs + t1.hrs + t2.hrs;
}
int main()
{
    time T1, T2, T3;
    T1.getline(2, 45);
    T2.getline(3, 30);
    T3.sum(T1, T2);

    cout << "T1 = ";
    T1.putline();
    cout << "T2 = ";
    T2.putline();
    cout << "T3 = ";
    T3.putline();
    return 0;
}