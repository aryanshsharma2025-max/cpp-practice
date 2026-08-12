#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a <= 255; a++)
    {
        for (int b = 0; b <= 255; b++)
        {
            for (int c = 0; c <= 255; c++)
            {
                for (int d = 0; d <= 255; d++)
                {
                    cout << a << "." << b << "." << c << "." << d << endl;
                }
            }
        }
    }
    return 0;
}
