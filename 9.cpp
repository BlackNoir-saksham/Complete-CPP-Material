#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void display(stack<int> &st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
        ;
    }
}
int minStack(stack<int> &st)
{
}
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int Closest = target;
        int sum = 0;
        int min = 0;
        int n = nums.size();
        stack<int> st;

        for (int j = 1; j <= (n - 2); j++)
        {
            sum = nums[0] + nums[j] + nums[j + 1]; //
            st.push(sum);
        }

        display(st);
        return minStack(st);
    }
};
int main()
{

    vector<int> nums = {-1, 2, 1, -4};
    sort(nums.begin(), nums.end());

    int target = 1;
    Solution s;
    s.threeSumClosest(nums, target);

    return 0;
}