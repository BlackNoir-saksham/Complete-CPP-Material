#include<iostream>
using namespace std;

int main(){
    

     int n,sum=0;
    cout << "Enter the size: " ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            cout<<sum<<" ";
            
        }
        sum=0;
    }

    return 0;
}