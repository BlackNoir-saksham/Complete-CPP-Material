#include <iostream>
using namespace std;

int main()
{

    int arr[]={12,45,23,51,19,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr and j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

        return 0;
}