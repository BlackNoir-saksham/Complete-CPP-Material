#include<bits/stdc++.h>
using namespace std;
 int searchInsert(vector<int>& nums, int target) {
        int i;
        for( i=0;i<nums.size();i++){
            if(nums[i]==target){
                break;
            }
        }
        return i;
    }
int main(){
    vector<int> nums = {1,3,5,6};
    cout<<searchInsert(nums, 5);
    return 0;
}