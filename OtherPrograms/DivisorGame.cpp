#include<iostream>
using namespace std;


int main(){
    
    int n,x;
    cout<<"number on Chalkboard: "<<endl;
    cin>>n;
    while(1){
        cout<<"Enter 'X' "<<endl;
        cin>>x;
        if(x<n and x>0 and n%x==0){
            n=n-x;
        }else{
            cout<<"Lost"<<endl;
            break;
        }
    }
    return 0;
}