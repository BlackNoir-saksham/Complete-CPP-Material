#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = i - 1; k < n; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

//     *
//    **
//   ***
//  ****
// *****