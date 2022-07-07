#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    // int timer=1;
    // int n=nums.size();
    // for(int i=0; i<n; i++){
    //     if(nums[i]==nums[i+1]){
    //         timer++;
    //     }else{
    //         if(timer>(n/2)){
    //             return nums[i];;
    //         }else{timer=1;}
    //     }
    // }



    int count = 0;
    int ans = 0;
    for (int i : nums)
    {
        if (count == 0)
        {
            ans = i;
        }
        if (i == ans)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3};
    cout << majorityElement(nums);
    return 0;
}