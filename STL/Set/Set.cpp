#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;
    for(auto i = s.rbegin(); i!=s.rend(); i++){  // reverse print
        cout<< *i <<" ";
    }cout<<endl;
    s.erase(2);
    for(auto i = s.begin(); i!=s.end(); i++){
        cout<< *i <<" ";
    }cout<<endl;
    return 0;
}