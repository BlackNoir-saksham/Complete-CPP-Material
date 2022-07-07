#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int op=0;
    while(t--){
        int n; 
        cout<<"Enter N: "<<endl;
        cin>>n;
        int op=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            
        }
        for(int i=0; i<n; i++){
            int d = i+op+1;
            if(a[i]==d){
               
                op++;
            }
        }
        // for(int i=1; i<=a.size(); i++){
        //     cout<<a[i]<<" ";
        // }
    //    cout<<endl; 
        cout<<op<<endl;

    }
    return 0;
}