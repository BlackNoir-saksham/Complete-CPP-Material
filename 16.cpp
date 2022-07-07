#include <bits/stdc++.h>
using namespace std;
int index;

class Solution{
public:
int rob(vector<int> &nums)
{
    int n = nums.size();
    int max = *max_element(nums.begin(), nums.end());

    if (n == 1)
    {
        return nums[0];
    }
    if (n == 2)
    {
        return 0;
    }
    if (n == 3)
    {
        return max;
    }
    return *max_element(robRange(nums, 0), robRange(nums, 1));
}

int robRange(vector<int> &nums, int index)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i + 2)
    {
        sum += nums[index];
        index + 2;
    }
    if (nums.size() % 2 != 0)
    {
        sum - (*min_element(nums[0], nums[nums.size() - 1]));
    }

    return sum;
}
};

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    Solution s;
    cout<<s.rob(nums);

    return 0;
}