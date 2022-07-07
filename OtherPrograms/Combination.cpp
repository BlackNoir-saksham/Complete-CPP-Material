#include <cmath> // to include pow function
#include <iostream>
using namespace std;

int fact(int num)
{

    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
        // cout<<factorial<<endl;
    }
    return factorial;
};
int ncr(int n1, int r1, int k1)
{

    float result;
    result = fact(n1) / (fact(r1) * fact(k1));
    return result;
}

int main()
{
    int n, r;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Enter the value of r: " << endl;
    cin >> r;
    int k;
    k = n-r;
    cout << ncr(n, r, k);
    // cout << k<<endl;
    return 0;
}