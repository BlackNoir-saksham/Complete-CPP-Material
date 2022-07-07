#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";
    int count=0;
    int s=pref.size();
    int n=words.size();
    cout<<words[1].substr(0, s);
    for(int i=0; i<n; i++){
        string sub = words[i].substr(0, s);
        if(sub==pref){
            count++;
        }
    }
    cout<<count;
    return 0;
}