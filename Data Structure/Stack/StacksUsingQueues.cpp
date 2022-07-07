#include<bits/stdc++.h>
using namespace std;
class Stack{
    int size;
    queue<int> q1;
    queue<int> q2;

    public:
        Stack(){
            size=0;
        }

        void push(int x){
            q1.push();
            size++;
        }

        int pop(){
            if(q1.empty()){
                return;
            }
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
                size--;
            }
            int t =q1.front();
            q1.pop();
            size--;

            queue<int> temp = q1;
            q1=q2;
            q2=temp;

            return t;
        }

        int top(){
            if(q1.empty()){
                return;
            }

            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
                
            }

            int ans = q1.front();
            q2.push(ans);

            queue<int> temp = q1;
            q1=q2;
            q2=temp

            return ans;
        }
};
int main(){
    
    return 0;
}