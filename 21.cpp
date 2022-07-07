#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaximumXOR(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res;
        int i=0;
        while(i<n)
        {
            for (int j = i+1; j < n; j++){
                res.push_back(nums[i] ^ nums[j]);
            }
            i++;
        }
        return *max_element(res.begin(), res.end());
    }
};

int main()
{
    vector<int> num = {14,70,53,83,49,91,36,80,92,51,66,70};
    Solution s;
    cout<<s.findMaximumXOR(num);
    return 0;
}