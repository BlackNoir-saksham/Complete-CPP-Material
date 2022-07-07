#include<iostream>
using namespace std;

int getBit(int n, int pos){
    // cout<<(1<<pos)<<endl;
    if((n & (1<<pos)) != 0 ){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    cout<<getBit(5, 2)<<endl;
    return 0;
}