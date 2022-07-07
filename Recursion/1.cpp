#include<bits/stdc++.h>
using namespace std;


int addAllNumbers(int n){
    if(n==0){
        return 0;
    }
    int sum = addAllNumbers(n-1);
     return n + sum;
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<addAllNumbers(n);
    return 0;
}