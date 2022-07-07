#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((nums[i]+nums[j])==target){
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    for (int i = 0; i < 2; i++){
        cout<<res[i];
    }
    
}
int main()
{
    vector<int> num = {3,2,1,7,3};
    int target = 6;
    twoSum(num, target);
    return 0;
}