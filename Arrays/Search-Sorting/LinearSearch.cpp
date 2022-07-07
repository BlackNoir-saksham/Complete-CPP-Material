#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    int key,i;
    cout << "Enter the item to be searched: " << endl;
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            break;
        }
    }
    cout << "item found at index: " << i;

    return 0;
}