#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    vector<string> status(n);

    for (int i = 0; i < n; i++)
    {
        status[i] = "off";
    }
    for (int round = 0; round < n; round++)
    {
        for (int k = 0; k < n; k++)
        {
            if (status[round + k] == "off")
            {
                status[round + k] = "on";
            }
            else
            {
                status[round + k] = "off";
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<status[i]<<" ";
    }

    return 0;
}