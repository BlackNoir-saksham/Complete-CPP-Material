#include <iostream>
using namespace std;

int main()
{

    int a[] = {-1, 4, 7, 2};
    int n = sizeof(a) / 4; // becoz 1 int = 4 bit size

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << ", ";
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}