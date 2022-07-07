#include <iostream>
using namespace std;

class Complex; // FORWARD DECLARATION

class Calculator
{

   public:
       int sumRealComplex(Complex, Complex);
       int sumCompComplex(Complex, Complex);
};



class Complex
{

    int a, b;

     /* Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend*/
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;

    o1.setNumber(1, 7);
    o2.setNumber(4, 9);

    Calculator calci;

    int result1 = calci.sumRealComplex(o1, o2);
    int result2 = calci.sumCompComplex(o1, o2);
    cout<<"The sum of real part is: "<<result1<<endl;
    cout<<"The sum of Imaginary part is: "<<result2<<endl;

    return 0;
}