#include <iostream>
using namespace std;

int main()
{

     int n,mx=-199999999;
    cout << "Enter the size: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       mx=max(arr[i],mx);
       cout<<mx;
       
    }

    

    return 0;
}