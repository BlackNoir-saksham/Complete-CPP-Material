#include<iostream>
using namespace std;

// setting bit of 5(0101) at pos=1
int setBit(int n, int pos){
    return((n | (1<<pos)));
}
int main(){
    cout<<setBit(5, 1);
    return 0;
}