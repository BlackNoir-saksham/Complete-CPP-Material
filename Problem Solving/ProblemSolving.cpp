#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int last){
    int fact=1;
    int i=last;
    // for(int i=last;i>0;i--){
    //     fact=fact*i;
    // }
    while(i>0){
        fact *=i;
        i--;
    }
    return fact;
}
void f(int x){
    int last,sum=0;
    while(x!=0){
        last=x%10;
        sum +=fact(last);
        x=x/10;
    }
    cout<<sum<<endl;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cout<<"Input n"<<endl;
    cin>>n; 
    f(n);
    
    return 0;
}
