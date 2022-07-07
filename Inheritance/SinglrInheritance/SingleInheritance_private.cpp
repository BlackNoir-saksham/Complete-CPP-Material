#include <iostream>
using namespace std;

class Base
{
    int data1; // by dafault not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 100;
    data2 = 20;
}

int Base ::getData1(void)
{
    return data1;
}

int Base ::getData2(void)
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData(); // Because it is private now it must be called through a function

    data3 = data2 * getData1();
    cout << "Multiplication of data1 and data2 is: " << data3 << endl;
}

void Derived ::display()
{
    setData(); // Because it is private now it must be called through a function
    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data2 is: " << getData2() << endl;
}

int main()
{

    Derived D;
    // D.setData(); it is now private due to visibility mode. Can't be called like this
    D.display();
    D.process();
    return 0;
}
