#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
  }
}
int main(){
    
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    display(st);
    
    
    return 0;
}