#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v;
        for(ll i=0; i<2*n; i++){
            ll y;
            cin>>y;
            v.push_back(y);
        }
        ll num=0;
        for(ll i=0; i<n; i++){
            inr max = (v[i]+v[n-1-i])/2;
            float min = ((v[i]+v[n-1-i])*1.0)/2;
            if(max==min){
                num++;
            }
        }
        if(num=n/2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}