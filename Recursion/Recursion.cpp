#include <iostream>
using namespace std;

int fact(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {

        return a * fact(a - 1);
    }
}

int main()
{
    int a;
    cout << "Enter the num: " << endl;
    cin >> a;
    cout << "Factorial of " << a << " is " << fact(a);
    return 0;
}