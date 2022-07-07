#include <bits/stdc++.h>
using namespace std;

/* 2
  3 4
 6 5 7
4 1 8 3
*/
int minimumTotal(vector<vector<int>> &t)
{
    int n = t.size();
   int sum = t[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            sum += min(t[i+1][j], t[i+1][j+1]);
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> tri = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << minimumTotal(tri);
    return 0;
}