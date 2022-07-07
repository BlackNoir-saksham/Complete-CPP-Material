#include <iostream>
using namespace std;

class Employee
{

    int id;
    int salary;
    static int count;

public:
    void setId(void);
    void getId(void);
};

void Employee ::setId(void)
{
    cout << "Enter Id of Employee: " << endl;
    cin >> id;
}

int Employee ::count=0;

void Employee ::getId(void)
{
    cout << " Id of Employee " << count+1 << " is " << id << endl;
    count++;
}

int main()
{

    Employee sakky[5];

    for (int i = 0; i < 5; i++)
    {
        sakky[i].setId();
        sakky[i].getId();
    }
    return 0;
}