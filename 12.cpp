#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    //bitwise operation: XOR ^
    //As a^b^c^a^b^d^d
    //  =a^a^b^b^d^d^c
    //  =0^  0^  0  ^c
    //  =c
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0)return -1;
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }

};

int main(){
    Solutions;
    cout<<s.singleNumber(num)
    return 0;
}