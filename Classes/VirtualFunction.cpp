#include <bits/stdc++.h>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout << " print Base Class" << endl;
    }
    void show()
    {
        cout << " Show Base Class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << " print Derived Class" << endl;
    }
    void show()
    {
        cout << " Show Derived Class" << endl;
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr=&d;
    bptr->print();
    bptr->show();
    return 0;
}