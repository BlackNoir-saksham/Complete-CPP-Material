#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){

    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next= n;
}

node* oddEven(node* &head){
    
     if(head==NULL ||head->next==NULL || head->next->next==NULL)return head;

    node* odd = head;
    node* even = head->next;
    node* evenStart = even;
    while(odd->next != NULL and even->next != NULL){
        odd->next = even->next;
        odd=odd->next;

        even->next = odd->next;
        even=even->next;
    }
    odd->next = evenStart;
    // if(odd->next != NULL){
        // even->next = NULL;
        return head;
    
    
       
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5};

    node* head = NULL;
    for(int i=0; i<5; i++){
        insertAtTail(head, arr[i]);
    }
    display(head);
    oddEven(head);
    display(head);
    return 0;
}