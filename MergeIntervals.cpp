#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int start = intervals[0][0];
    int end = intervals[0][1];
    for (int i = 0; i < intervals.size() - 1; i++)
    {
        if (intervals[i + 1][0] <= end)
        {
            end = max(intervals[i + 1][1], end);
        }
        else
        {
            ans.push_back(vector<int>{start, end});  // Inserting elements in "2D Vector"
            start = intervals[i + 1][0];
            end = intervals[i + 1][1];
        }
    }
    ans.push_back(vector<int>{start, end});
     for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j]<<" ";
        }
        
    }
    return ans;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    merge(intervals);
   
    return 0;
}