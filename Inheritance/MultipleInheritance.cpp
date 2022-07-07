#include <iostream>
using namespace std;

// Derived class with 2 or more base classes

/* Syntax:

class DERIVED : visibility-mode BASE 1, visibility-mode BASE 2{};  */
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;  // base1int is inheritable becoz it is protected in previous classes
        cout << "The value of Base2 is " << base2int << endl;  // base2int is inheritable becoz it is protected in previous classes
        cout << "The value of Base3 is " << base3int << endl;  // base3int is inheritable becoz it is protected in previous classes
        cout << "The sum of these values is " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();

    return 0;
}