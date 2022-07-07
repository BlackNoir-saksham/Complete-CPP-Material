#include <iostream>
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
    for (int j = 0; j < n; j++)
    {
        cout << " " << arr2[j];
    }
}