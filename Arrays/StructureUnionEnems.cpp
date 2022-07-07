#include <iostream>
using namespace std;

//The typedef in C/C++ is a keyword used to assign alternative names to the existing datatypes
typedef struct employee
{
    int Id;
    float salary;
    char favChar;
} ep;

union money
{
    int dollor;
    float pound;
    char euro;
};

int main()
{

    ep sakky; // OR struct employee sakky;
    sakky.Id = 19082;
    sakky.salary = 80000;
    sakky.favChar = 'c';

    cout << sakky.Id << endl;
    cout << sakky.salary << endl;
    cout << sakky.favChar << endl;

    //UNION

    union money m1;
    m1.dollor = 75;
    m1.euro = 82;
    cout << m1.dollor << endl;
    cout << m1.euro << endl;

    //ENUM

    enum meals
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}