#include <iostream>
using namespace std;

#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"stackOverflow"<<endl;
            return;
        }

        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"stack Underflow"<<endl;
            return;
        }

        top--;  // pops tthe element
    }

    int Top(){
        if(top==-1){
            cout<<"No element in Stack"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

    void display(){
        for (int i = top; i>=0; i--)
        {
            cout<<arr[i]<<" "<<endl;
        }
        
    }
};

int main(){

    stack st;
    st.push(5);
    st.push(12);
    st.push(9);
    st.push(3);
    st.pop();
    st.display();




    return 0;
}