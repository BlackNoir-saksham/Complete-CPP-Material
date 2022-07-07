#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
};

class Queue{
    node* front;
    node* back;

    public:
        Queue(){
            front=NULL;
            back=NULL;
        }

        void enqueue(int x){
            node* n = new node(x);
            if(front==NULL){
                front=n;
                back=n;
                return;
            }
            back->next=n;
            back=n;

        }

        void dequeue(){
            if(front==NULL){
                cout<<"Queue Underflow"<<endl;
                return;
            }
            front=front->next;
        }

        int peek(){
            if(front==NULL){
                cout<<"No Element to Show"<<endl;
                return -1;
            }
            cout<<front->data<<endl;
        }

        bool empty(){
            if(front==NULL){
                return true;
            }
            return false;
        }

        void display(){
            if(front==NULL){
                cout<<"Ghanta kuch nhi h"<<endl;
                return;
            }
            node* temp = front;
            while(temp != NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
};

int main(){
    Queue q;
    q.enqueue(-4);
    q.enqueue(-9);
    q.enqueue(-1);
    q.enqueue(3);
    q.enqueue(7);

    q.dequeue();

    q.display();
    q.peek();
    return 0;
}