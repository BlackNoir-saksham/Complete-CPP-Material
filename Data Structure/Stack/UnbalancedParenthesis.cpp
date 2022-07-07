#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() and st.top() == '{')
            {
                st.pop();
                
            }
            else{
                ans = false;
                break;
            }
           
        }

        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
                
            }
            else{
                ans = false;
                break;
            }
           
        }

        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(' )
            {
                st.pop();
                
            }else{
                ans = false;
                break;
            }
            
        }


        if(!st.empty()){
            cout<<"false";
        }else{
            cout<<"true";
        }
    }
}

int main()
{

    string s = "([)]";

    isValid(s);

    return 0;
}