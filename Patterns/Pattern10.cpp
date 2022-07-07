#include <iostream>
using namespace std;

int main()
{
    int n, i, j, m, s = 1;
    cout << "Enter the number of rows:" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n ; j++)
        {
            if (i % 2 == 0)
                
            {
                for (m = 0; m < i; m++)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << s << ++s;
            }
        }
        cout << endl;
    }

    return 0;
}