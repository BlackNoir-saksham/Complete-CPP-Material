#include <iostream>
using namespace std;

int main()
{
    int n, diff, curr=2, ans=2,sum = 0;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int pd = arr[0] - arr[1];
    for (int i = 0; i < n; i++)
    {
        if ((arr[i + 1] - arr[i]) == pd)
        {
            curr++;
        }
        else
        {
            pd = arr[i + 1] - arr[i];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}