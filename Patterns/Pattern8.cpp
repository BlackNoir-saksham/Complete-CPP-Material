#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Length: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >n-i; j--)
        {
            cout << " ";
        }
        for (int k = n - i; k >= 1; k--)
        {
            cout << "*";
        }
        for (int k = n - i-1; k >= 1; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
