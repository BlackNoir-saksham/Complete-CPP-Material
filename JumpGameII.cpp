#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums){
   int farthest = 0;
   int jumps = 0;
   int current = 0;
   int n = nums.size();
   for(int i=0; i<n-1; i++){
       farthest = max(farthest, i+nums[i]);

       if(i==current){
           current=farthest;              
           jumps++;
       }
   }

   return jumps;
   
   
}

int main(){
    vector<int> nums={2,3,1,1,4};
    cout<<jump(nums);
    return 0;
}