#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    // int m = nums1.size();
    // int n = nums2.size();
    // vector<int> merged;
    // float median;
    // for (int i = 0; i < m; i++)
    // {
    //     merged.push_back(nums1[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     merged.push_back(nums2[i]);
    // }
    // int l = merged.size();
    // if((l)%2 == 0){
    //      median = float((merged[(l)/2 -1] + merged[(l)/2 +1])/2);
    //     return median;
    // }else{
    //      median = merged[(l-1)/2];
    //      return median;
    // }
    
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout<<findMedianSortedArrays(nums1, nums2);

    return 0;
}