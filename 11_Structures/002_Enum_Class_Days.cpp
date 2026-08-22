#include <iostream>
using namespace std;

enum class day
{
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    day today = day::thursday;
    cout << "Day value: " << static_cast<int>(today) << endl;
    return 0;
}
