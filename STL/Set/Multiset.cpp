#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int, greater<int>> s;  // in descending order
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(2);
    vector<int> ans;
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;
    for(auto i = s.rbegin(); i!=s.rend(); i++){  // reverse print
        cout<< *i <<" ";
    }cout<<endl;
    //s.erase(2); // erase all occurences of 2
    s.erase(s.lower_bound(2));  // erase only first occurrence 
    s.erase(s.find(2)); // erase only first occurrence 
    for(auto i = s.begin(); i!=s.end(); i++){
        cout<< *i <<" ";
    }cout<<endl;

    ans.push_back(*s.begin());  // gives 1st element
    cout<<ans[0];
    return 0;
}