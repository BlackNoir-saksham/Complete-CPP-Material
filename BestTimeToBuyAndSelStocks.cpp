#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    // int ans=0;
    // int mx=0;
    // int n=prices.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         ans = -prices[i] + prices[j];
    //         mx = max(mx, ans);
    //     }
    // }
    // if(mx<=0){return 0;}
    // return mx;

    int maxProfit(vector<int>& prices) {  //KADANES ALGORITHM
        int n= prices.size();
        int maxprofit = 0;
        int minvalue = INT_MAX;
        for(int i =0;i<n;i++){
            minvalue = min(prices[i],minvalue);
            maxprofit= max(maxprofit,prices[i] - minvalue);
        }
        return maxprofit;
    }
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
    return 0;
}