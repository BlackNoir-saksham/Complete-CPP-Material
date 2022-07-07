#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int b = 10;
    cout << "logical and operator: " << ((a>b) && (a==b)) <<endl;
    cout << "logical and operator: " << ((a>b) || (a==b));
    return 0;
}