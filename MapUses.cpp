#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    for (auto it = m.cbegin(); it != m.cend(); ++it) {
        std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
    }
    for (auto it = m.cbegin(); it != m.cend(); ++it)
    {
        if ((*it).second == 1)
        {
            cout << (*it).first;
        }
    }

    return 0;
}

