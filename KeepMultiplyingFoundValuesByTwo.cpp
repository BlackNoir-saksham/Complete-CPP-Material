#include <bits/stdc++.h>
using namespace std;

int findFinalValue(vector<int> &nums, int original)
{
    sort(nums.begin(), nums.end());
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]==original){
            original = original * 2;
            continue;
        }
    }
    return original;
}

int main()
{
    vector<int> nums={8,19,4,2,15,3};
    int original =2;
    cout<<findFinalValue(nums, original);
    return 0;
}