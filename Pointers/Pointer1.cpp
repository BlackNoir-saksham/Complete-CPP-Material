#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<*ptr<<endl;
    cout<<&a<<endl;

    *ptr=200;  //accessing variable through pointer
    cout<<a<<endl;


    //Pointer Arithmetic

    
    cout<<*ptr+1<<endl;
    ptr++;
    cout<<ptr<<endl;


    return 0;
}