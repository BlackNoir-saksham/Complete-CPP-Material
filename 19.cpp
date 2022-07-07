#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void buildArray(vector<int>& target, int n) {
        vector<string>res;
        int i=1,j=0;
        while(j<target.size())
        {
            res.push_back("Push");
			
			// if the number is not present in the target array then pop.
            if(i < target[j])
                res.push_back("Pop");
            else j++;
            i++;
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
    }
};

int main()
{
    vector<int> tar;
    tar = {1,2,4};
    Solution s;
    s.buildArray(tar, 3);
    return 0;
}