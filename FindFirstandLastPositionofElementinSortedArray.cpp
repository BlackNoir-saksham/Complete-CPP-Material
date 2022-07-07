#include<bits/stdc++.h>
using namespace std;

void searchRange(vector<int>& nums, int target){
    vector<int> res;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            res.push_back(i);
        }
    }
    cout<<*min_element(res.begin(), res.end())<<endl;
    cout<<*max_element(res.begin(), res.end())<<endl;
}
int main(){
    vector<int> nums={5,7,7,8,8,8,10};
    searchRange(nums,8);
    return 0;
}