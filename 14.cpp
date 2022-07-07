#include <bits/stdc++.h>
using namespace std;

bool longestPalindrome(string s)
{
    int n = s.size();
    int count = 0;
    for (int i = 0; i < (n / 2); i++)
    {
        if (s[i] == s[n - i-1])
        {
            count++;
        }else{
            count--;
        }
    }
    if (count == n / 2)
    {
        return true;
    }
        return false;
}

int main()
{
    string s = "babad";
    cout << longestPalindrome(s);
    return 0;
}