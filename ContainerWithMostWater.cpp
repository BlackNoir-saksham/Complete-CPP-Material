#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {1,1,1};
    int h = height.size();
    int sum=0;
    int p1=0;
    int p2=h-1;
    while(p1<p2){
        sum = max(sum , min(height[p1], height[p2])*(p2-p1));
        if(height[p2]<=height[p1]){
            p2--;
            
        }else{
           p1++;
        }
    }
cout<<sum;

    // TLE
    // int ans=0;
    // for(int i=0; i<h; i++){
    //     for(int j=h-1; j>i; j--){
            
    //         int res = min(height[i], height[j])*(j-i);
    //        ans=max(res, ans);
            
    //     }
    // }
    // cout<<ans;
    return 0;
}