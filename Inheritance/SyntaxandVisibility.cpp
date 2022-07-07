/* MULTIPLE INHERITANCE : A derived class with more than one base class
   HEIRARCHICAL INHERITANCE : SEVERAL DERIVED CLASS FROM A SINGLE BASE CLASS
   SINGLE INHERITANCE : A derived class with one base class
   MULTILEVEL INHERITANCE : Deriving a class from already derived class
   HYBRID INHERITANCE : Combination of multi level and multiple inheritance
                        A class derived from two classes as in multiple inheritance
                        However, one of the parent class is not a base class.*/

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 80000;
    }
    Employee() {} // Default Constructor [Necessary]
};

// Derived class Syntax
/*
    class derived-class-name : visibility-mode base-class-name
    {
        class members/methods etc....
    }

    NOTES    :::
    1. Default visibility-mode is private
    2. Private members are NEVER Inherited
    3. Public Visibility Mode: Public members of base class becomes Public members of derived class
    4. Private Visibility Mode: Public members of base class becomes Private members of derived class
    */

// creating a programmer class from Employee (Base class)
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(void)
    {
        cout << id << endl;
    }
};

int main()
{

    Employee sakky(1), rohan(3);

    cout << sakky.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(1001);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}