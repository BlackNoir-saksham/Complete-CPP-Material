#include <iostream>
using namespace std;

class Complex
{

    int a, b;

    // Constructor is a special mamber function with the same name as of class
    // It is automatically invoked when the object is created
public:
    Complex(void); // Constructor Declaration

    void printNumber(void)
    {
        cout << "The Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void)  // Default Constructor i.e, accepts no parameter
{
    a = 10;
    b = 3;
}
int main()
{

    Complex c;
    c.printNumber();

    return 0;
}

/* Constructors Characterstics::

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the oblect is created
3. They do not have a return type
4. It can have default arguements
*/