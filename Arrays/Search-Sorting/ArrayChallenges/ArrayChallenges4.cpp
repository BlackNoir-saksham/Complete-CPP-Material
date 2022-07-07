#include <iostream>
using namespace std;

int main()
{
    int n,j=0;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            cout<<"  "<<arr[i]<<endl;
            j++;
           
        }
    }
     cout<<j<<endl;

    return 0;
}