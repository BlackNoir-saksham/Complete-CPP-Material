#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

friend void sum(X,Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
friend void sum(X,Y);

};

void sum(X a1, Y b2)
{
    cout << "Sum of X and Y objects gives me: " << a1.data + b2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(5);
    Y b1;
    b1.setValue(7);

    sum(a1, b1);
    return 0;
}