#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array:  " << endl;
    cin >> n;
    int arr2[n];
    cout << "Enter the Elements of array:  " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "Entered  Elements of array are:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr2[i]<<endl;
    }

    int largest = arr2[0];
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] > largest)
        {
            largest = arr2[i];
        }
        
    }
    cout << "largest: "<<largest<<endl;
    

    return 0;
}
