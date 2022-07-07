#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1 ,2 ,3 ,5 ,6};
    int pos=3;
    int n=5;
    int insert=44;

    for(int i=0; i<n-pos;i++){
        arr[n-i]=arr[n-1-i];
    }
    arr[pos]=insert;
    for (int i = 0; i <n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    // code running perfectly in online compiler


    return 0;
}