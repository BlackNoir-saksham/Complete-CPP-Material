#include <iostream>
using namespace std;

int main()
{
    int n, j = 0;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n],idx[n+1];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        idx[arr[i]]=arr[i];
    }

    cout<<idx[5]<<endl;



    return 0;
}