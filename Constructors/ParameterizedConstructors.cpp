#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber(void);
};
Complex ::Complex(int x, int y)   // Parameterized Constructor
{
    a = x;
    b = y;
}
void Complex ::printNumber(void)
{
    cout << a << " + " << b << "i" << endl;
}
int main()
{

    Complex a(5,9); //method 1
    a.printNumber();

    Complex c = Complex(4, 6);//method 2
    c.printNumber();

    Complex d=Complex(9,9);
    d.printNumber();
    return 0;
}