#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{

    string s = "BCfhjAAdgHj";

    // To upper case

    cout << 'a' - 'A' << endl; // lower case characters are 32 further then uppercase

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;

    //To lowercase
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    cout << s << endl;
}