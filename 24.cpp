#include <bits/stdc++.h>
using namespace std;


void swap(int &a, int &b){
        int temp = a;
        a=b;
        b=temp;
    }

    
int maxProduct(vector<int> &nums)
{
    // BRUTE FORCE
    // int n=nums.size();
    // int product=1;
    // vector<int> res;
    //     for(int i=0;i<n;i++){
    //         for (int j=i+1; j<n;j++){
    //             product = product*nums[i]*nums[j];
    //             res.push_back(product);

    //         }
    //         product=1;
    //     }
    //     sort(res.begin(), res.end());
    //     return res[res.size()-1];

    
    int res = nums[0];
    int ma = nums[0];
    int mi = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(ma, mi);
        }
            ma = max(nums[i], ma * nums[i]);
            mi = min(nums[i], mi * nums[i]);
            res = max(res, ma);
        }
        return res;
    
}

int main()
{
    vector<int> nums = {2,3,-2,4};
    cout << maxProduct(nums);
    return 0;
}