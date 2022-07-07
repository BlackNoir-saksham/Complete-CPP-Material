#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex() // UnParameterized Constructor
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y) // Parameterized Constructor
    {
        a = x;
        b = y;
    }
    Complex(int x) // Parameterized Constructor
    {
        a = x;
        b = 0;
    }
    void printNumber(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};

/*Overloaded constructors essentially have 
the same name (exact name of the class) 
and differ by number and type of arguments.*/

int main()
{

    Complex a(5, 9);
    a.printNumber();
    
    Complex c(5);
    c.printNumber();

    Complex b;
    b.printNumber();
    return 0;
}