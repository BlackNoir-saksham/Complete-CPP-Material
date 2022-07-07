#include <iostream>
#include <algorithm>
#include <typeinfo>
using namespace std;

int main()
{

    string s;
    cout << "Enter string: " << endl;
    cin >> s;

   sort(s.begin(), s.end(), greater<int>());  // Sorting s string to make biggest possible no. out of it
   cout<<s<<endl;

    return 0;
}