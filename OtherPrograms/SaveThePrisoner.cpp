#include <iostream>
using namespace std;

class Solution
{
public:
    Solution(int n, int m, int s)
    {
        // int count=1;
        // for (int i = s; i <= n; i++)
        // {
        //     cout << i << " ";
        //     count++;
        // }
        // for (int i = 1; i <= count; i++)
        // {
        //     cout << i << " ";
        // }
        for (int i = 1; i <= m; i++){
            

        }
    }
};
int main()
{

    int t, n, m, s;
    cout << "Enter number of test Cases: " << endl;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Enter n: " << endl;
        cin >> n;

        cout << "Enter m: " << endl;
        cin >> m;

        cout << "Enter s: " << endl;
        cin >> s;

        Solution S(n, m, s);
    }

    return 0;
}