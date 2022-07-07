#include <iostream>
using namespace std;

inline int product(int a, int b) // reduce processing time but increase cache size
{
    static int c = 0; // Initialise/Execute  only once
    c = c + 1;
    return a * b + c;
}
int main()
{
    int a, b;
    cout << "Enter value of a & b: " << endl;

    cin >> a >> b;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;
    cout << "product:::" << product(a, b) << endl;

    return 0;
}