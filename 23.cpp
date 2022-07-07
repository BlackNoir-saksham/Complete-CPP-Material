#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> Map;
    int n=nums.size();
    
    // [2,7,11,15]   target = 9
    for(int i=0; i<n; i++){
        int x = target - nums[i];
        if(Map.find(x)!=Map.end()){ //gives true (goes inside the condition)if present in map
            
              cout<<Map[x]<<i;
        }

            Map[nums[i]]=i;
    }
    return{};
   
}

int main(){
    vector<int> nums={2,7,11,15};
    int target = 17;
    twoSum(nums, target);
    return 0;
}