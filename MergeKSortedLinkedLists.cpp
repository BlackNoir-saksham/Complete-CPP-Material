#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next=NULL;
        }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
    
}

node* mergeK(node* &head1, node* &head2){
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummyNode = new node(-1);
    node* ptr3 = dummyNode;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data <= ptr2->data){
            dummyNode->next = ptr1;
            ptr1=ptr1->next;
        }else{
            dummyNode->next = ptr2;
           ptr2 = ptr2->next;
        }
        dummyNode=dummyNode->next;
    }

    while (ptr1 != NULL)
    {
        dummyNode->next = ptr1;
        dummyNode=dummyNode->next;
        ptr1=ptr1->next;
    }
    while (ptr2 != NULL)
    {
        dummyNode->next = ptr2;
        dummyNode=dummyNode->next;
        ptr2=ptr2->next;
    }
    
    return ptr3->next;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int main(){
    
    node* head1 = NULL;
    node* head2 = NULL;
    node* head3 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    display(head1);
    insertAtTail(head2, 4);
    insertAtTail(head2, 5);
    insertAtTail(head2, 6);
    display(head2);
    insertAtTail(head3, 7);
    insertAtTail(head3, 8);
    insertAtTail(head3, 9);
    display(head3);

    node* newHead1 = mergeK(head1, head2);
    display(newHead1);
    node* newHead2= mergeK(newHead1, head3);
    display(newHead2);
    return 0;
}