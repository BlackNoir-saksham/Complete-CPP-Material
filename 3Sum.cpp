#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;
    vector<int> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1;
        int hi = n - 1;
        while (lo < hi)
        {
            int curr = nums[i] + nums[lo] + nums[hi];
            if (curr == 0)
            {
                res.push_back(nums[i]);
                res.push_back(nums[lo]);
                res.push_back(nums[hi]);
                if (!count(ans.begin(), ans.end(), res))
                {
                    ans.push_back(res);
                }
                res.resize(0);
            }
            if (curr < 0)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }



    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}