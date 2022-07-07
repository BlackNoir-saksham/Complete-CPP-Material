#include <iostream>
using namespace std;

int main()
{
    int a[4][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}, {10, 13, 14, 17}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "   " << a[i][j];
        }
        cout << endl;
    }

    int target;
    cout << "Enter target: " << endl;
    cin >> target;

    int n = 4, r = 0, c = n - 1;
    bool found = true;
    while (r < n and c >= 0)
    {
        if (a[r][c] == target)
        {
            found = true;
        }
        else if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Does not Exist";
    }
    return 0;
}