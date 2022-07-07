#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    vector<int> ans;
    int n=prices.size();
    for(int i=0; i<n-1; i++){
        if(prices[i]<prices[i+1]){
            ans.push_back(prices[i+1]-prices[i]);
        }
    }
    cout<<accumulate(ans.begin(),ans.end(),0);
    return 0;
}