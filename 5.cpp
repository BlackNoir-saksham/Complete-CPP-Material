#include<iostream>
using namespace std;

 float myPow(float x, int n) {
        float pow = 1.0;
        if(n>=0){
        for(int i=1; i<=n;i++){
            pow = pow*x;
        }
        return float(pow);
        }
        else{
            return float(1/pow);
        }
    }

int main(){
    cout<<myPow(2,-2);
}