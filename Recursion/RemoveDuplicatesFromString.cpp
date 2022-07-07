#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == s[1])
    {
        removeDuplicates(s.substr(1));
    }
    else
    {
        cout << s[0];
        removeDuplicates(s.substr(1));
    }
}
int main()
{
    removeDuplicates("aaaabbbbbccccdddd");
    return 0;
}