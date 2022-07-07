#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
    stack<int> s;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
        }

        int temp = s.top();
        s.pop();
        s.push(x);
        s.push(temp);
    }

    int pop()
    {
        if (s.empty())
        {
            cout << "No elements to Remove"<< endl;
            return -1;
        }
        cout<<s.top();
        s.pop();
    }

    int peek()
    {
         if (s.empty())
        {
            cout << "No elements to Remove"<< endl;
            return -1;
        }
        cout<<s.top()<<endl;
        
    }

    bool empty()
    {
         if (s.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.empty()
    return 0;
}