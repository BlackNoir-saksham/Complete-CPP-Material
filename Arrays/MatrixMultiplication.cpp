#include <iostream>
using namespace std;

int main()
{
    int a1[3][2] = {{2, 3}, {4, 5}, {6, 8}};
    int a2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int ans[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int i, j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " " << a1[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << a2[i][j];
        }
        cout << endl;
    }
    cout << "Multiplication of above Matrix is: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                ans[i][j] += a2[i][k] * a1[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}