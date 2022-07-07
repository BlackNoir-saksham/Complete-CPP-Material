#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {5, 2, 18, 16, 4, 9};

    sort(arr, arr + 6); // ascending
    cout << "Ascending: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    sort(arr, arr + 6, greater<int>()); // descending
    cout << "Descending: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}