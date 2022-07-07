#include<iostream>
using namespace std;

int main(){
    
    int arr[]={10,20,30,40};

    int *ptr=arr;         //Pointers in Array
    for(int i=0;i<4;i++){
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        cout<<*(arr+i)<<endl;
        ptr++;
    }
    return 0;
}