#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + "<< "i" << b << endl;
    }
};

int main()
{
    Complex C1, C2, C3;

    C1.setdata(1, 2);
    C1.printNumber();

    C2.setdata(5, 2);
    C2.printNumber();

    C3.setdatabySum(C1, C2);
    C3.printNumber();

    return 0;
}