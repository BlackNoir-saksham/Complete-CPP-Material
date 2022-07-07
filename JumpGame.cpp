#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    if(nums[0]==0){
        return false;
    }
    int reachable =0;
    for(int i=0; i<nums.size(); i++){
        if(reachable < i){
            return false;
        }

        reachable = max(reachable, i+nums[i]);
    }
    return true;
    
    
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    cout<<canJump(nums);
    return 0;
}