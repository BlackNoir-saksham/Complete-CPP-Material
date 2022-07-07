#include <iostream>
using namespace std;

class SimpleCalculator
{
    int a1, b1;

public:
    int addition(int x, int y)
    {
        x = a1;
        y = b1;
        return (x + y);
    }
    int subtraction(int x, int y)
    {
        x = a1;
        y = b1;
        return (x - y);
    }
    int multiplication(int x, int y)
    {
        x = a1;
        y = b1;
        return (x * y);
    }
    float division(float x, float y)
    {
        x = a1;
        y = b1;
        return (x / y);
    }
};

class ScientificCalculator
{
    int a2, b2;

public:
    int factorial(int f){

         int factorial(int f){
              if (f > 1) return (f * factorial(f - 1));

    else return 1;
}
}
;
int main()
{

    return 0;
}
