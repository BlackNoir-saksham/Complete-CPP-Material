#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n, maxSum = INT_MIN;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                // cout << a[k] << " "; for printing subaays

                sum = sum + a[k];
                
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}