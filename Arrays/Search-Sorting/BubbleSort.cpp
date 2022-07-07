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
    int counter = 1;

    cout << "After sorting: " << endl;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (num[i] > num[i+1])
            {
                int temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}