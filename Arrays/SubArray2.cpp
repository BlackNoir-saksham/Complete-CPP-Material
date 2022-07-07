#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cout << "Enter the size: ";
    cin >> n;
    int a[n], b[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        b[i] = sum;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}