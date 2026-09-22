#include <iostream>
using namespace std;
int stackArr[5];
int top = -1;
void push(int val)
{
    if (top == 4)
    {
        cout << "stack overflow\n";
        return;
    }
    top++;
    stackArr[top] = val;
}
void pop()
{
    if (top == -1)
    {
        cout << "stack underflow\n";
    }
    else
    {
        cout << "Deleted: " << stackArr[top] << endl;
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "stack is empty\n";
    }
    else
    {
        cout << "Top Element: " << stackArr[top] << endl;
    }
}
void display()
{
    if (top == -1)
    {
        cout << "stack is empty\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    push(30);
    push(40);
    push(50);
    display();
    peek();
    pop();
    display();
    return 0;
}