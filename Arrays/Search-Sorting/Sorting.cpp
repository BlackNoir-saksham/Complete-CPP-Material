#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int num[n];

    cout << "Enter elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "After sorting: " << endl;

    for (int i = 0; i < n ; i++)
    {
        for (int j = i ; j < n; j++)
        {
            if (num[j] < num[i])
            {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i];
    }

    return 0;
}