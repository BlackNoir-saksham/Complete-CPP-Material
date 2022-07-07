#include<bits/stdc++.h>
using namespace std;

// #define for(i,a,b) for(int i=a; i<b; i++)
// #define vi vector<int>

void sieve(int n){
    int prime[n]={0};

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            for(int j=i*i; j<=n; j=j+i){
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
        
    }
}

int main(){
    
    int n;
    cout<<"Enter The LIMIT: "<<endl;
    cin>>n;
    sieve(n);
    return 0;
}

