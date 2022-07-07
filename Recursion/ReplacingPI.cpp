#include<bits/stdc++.h>
using namespace std;

void replacingPI(string s){
    if(s.length()==0){  //base case
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<" 3.14 ";
        replacingPI(s.substr(2));
    }else{
        cout<<s[0];
        replacingPI(s.substr(1));
    }
}

int main(){
    string s="pippgdjApiiijhjhpi";
    replacingPI(s);
    return 0;
}