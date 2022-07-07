#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int isLast = nums[n - 1];
    int i,count = 0;
    for(int i=0;i<n;i++)
    {
        isLast = nums[nums[i]+i];
        
        if (isLast == nums[n - 1])
        {
            count++;
            break;
            
        }
    }
    if(count==0){
        return false;
    }else{
        return true;
    }
    
}

int main()
{

    vector<int> nums = {3,2,1,0,4};
    cout<<canJump(nums);
    return 0;
}