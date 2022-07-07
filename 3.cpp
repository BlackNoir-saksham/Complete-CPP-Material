#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stc;
        if (s.length() % 2 != 0)
        {
            return false;
        }
        else
        {

            for (int i = 0; i < s.length(); i++)
            {
                stc.push(s[i]);
            }
        }
        while (!stc.empty())
        {
            cout << stc.top() << endl;
            stc.pop();
        }
        switch (i<s.length())
        {
        case ()
            break;
        
        default:
            break;
        }
    }
};

int main()
{
    string s = "([{}])";

    Solution sol;
    cout << sol.isValid(s);
    return 0;
}