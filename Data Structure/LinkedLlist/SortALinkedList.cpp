#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        data = data;
        next = NULL;
    }
};
/**
 * Definition for singly-linked list.
 * struct node {
 *     int data;
 *     node *next;
 *     node() : data(0), next(nullptr) {}
 *     node(int x) : data(x), next(nullptr) {}
 *     node(int x, node *next) : data(x), next(next) {}
 * };
 */

    node* merge(node* &head1, node* &head2){
        if(head1==NULL){return head2;}
        if(head2==NULL){return head1;}
        
        node* ptr1 = head1;      
        node* ptr2 = head2;   
        
        node* dummy = new node(0);
        node* ptr3 = dummy;
        
        while(ptr1 != NULL or ptr2 != NULL){
            if(ptr1->data < ptr2->data){
                ptr3->next = ptr1;
                ptr1=ptr1->next;
                
            }else{
                ptr3->next = ptr2;
                ptr2=ptr2->next;
               
            }
            ptr3=ptr3->next;
        }
        
        while(ptr1 != NULL){
            ptr3->next = ptr1;
            ptr1=ptr1->next;
            ptr3=ptr3->next;
        }
        while(ptr2 != NULL){
            ptr3->next = ptr2;
            ptr1=ptr2->next;
            ptr3=ptr3->next;
        }
        
        return dummy->next;

    }
    
    node* middleNode(node* &head){
        node* slow = head;
        node* fast = head;
        while(fast != NULL and fast->next != NULL){
            slow=slow->next;
            fast = fast->next->next;
        }
            return slow;
    }
    
    node* sortList(node* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        
        node* mid = middleNode(head);
        
        node* left = head;
        node* right = mid->next;
        mid->next=NULL;
        
        left = sortList(left);
        right = sortList(right);
        
        node* result = merge(left, right);
        cout<<"jgfkad";
        return result;

    }


void insertAtTail(node* &head, int data)
{

    node *n = new node(data);

    if (head == NULL)   //  iF Linked List is already empty
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = NULL;
    
  
    insertAtTail(head, 4);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    display(head);
    node* newhead = sortList(head);
    display(newhead);
    return 0;
}