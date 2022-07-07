#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3;
        vector<int> a(2*n);
        map<int,int> count;
        for(int i=0; i<2*n; i++){
            cout<<"Enter elements: "<<endl;
            cin>>a[i];
            count[a[i]]++;
        }
        
        for (auto it = count.cbegin(); it != count.cend(); ++it) {
        std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
    }
    return 0;
}