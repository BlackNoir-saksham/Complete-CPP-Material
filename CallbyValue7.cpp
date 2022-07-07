#include <iostream>
using namespace std;

int swap(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << "  b=" << b << endl;
}
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "a=" << *x << "  b=" << *y << endl;
}
int main()
{
    int a = 10, b = 11;

    cout << "Value after call by value: " << endl;
    swap(a, b);
    cout << "a=" << a << "  b=" << b << endl;
    swapPointer(&a, &b);
    cout << "a=" << a << "  b=" << b << endl;

    return 0;
}