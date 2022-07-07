#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of Square matrix: " << endl;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << a[i][j];
        }
        cout << endl;
    }

    cout<<"The transpose of entered matrix is: "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << a[j][i];
        }
        cout << endl;
    }

    return 0;
}