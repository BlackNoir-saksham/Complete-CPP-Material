#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "0P";
    for (int i = 0; i < s.length(); i++)
    {
        if (!((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
        {
            s.erase(i, 1);
        }
        if (s[i] >= 48 && s[i] <= 57)
        {
            s.erase(i, 1);
        }
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = tolower(s[i]);
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
    }
    string str = s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    cout << str << endl;
    if (str == s)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
    return 0;
}