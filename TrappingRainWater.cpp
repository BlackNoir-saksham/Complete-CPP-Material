#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {3,1,2,4,0,1,3,2};
    int n=height.size();
    vector<int> left(n);
    vector<int> right(n);
    int first=height[0];
    for(int i=0; i<n; i++){
        
        left[i]=max(first, height[i]);
        first=left[i];
    }
    int second=height[n-1];
    for(int i=n-1; i>=0; i--){
        right[i]=max(second, height[i]);
        second=right[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += min(left[i], right[i])-height[i];
    }
    cout<<sum;
    return 0;
}