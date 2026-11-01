#include <iostream>
#include <string>
using namespace std;

class DynamicArray
{
    int *data;
    int size;

public:
    DynamicArray(int s)
    {
        size = s;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = (i + 1) * 10;
        }
    }

    DynamicArray(const DynamicArray &source)
    {
        size = source.size;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = source.data[i];
        }
    }

    void modifyElement(int index, int value)
    {
        if (index >= 0 && index < size)
        {
            data[index] = value;
        }
    }

    void display(const string &objName)
    {
        cout << objName << " [Heap Address: " << data << "]: ";
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray()
    {
        delete[] data;
    }
};

int main()
{
    DynamicArray original(3);
    DynamicArray copy = original;

    cout << "--- Before Modifying Copy ---" << endl;
    original.display("Original");
    copy.display("Copy    ");

    copy.modifyElement(0, 999);

    cout << "\n--- After Modifying Copy[0] to 999 (Original remains untouched) ---" << endl;
    original.display("Original");
    copy.display("Copy    ");

    return 0;
}
