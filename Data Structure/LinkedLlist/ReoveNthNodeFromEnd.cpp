#include <bits/stdc++.h>
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

int length(node* head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *removeNthFromEnd(node *head, int n)
{
    int l = length(head);
    int count = 1;
    node *toDelete;
    node *temp = head;
    if (head->next == NULL)
    {
        head = NULL;
        return head;
    }
    else
    {
        while (temp->next != NULL)
        {
            if (count == l - n)
            {
                toDelete = temp->next;
                temp->next = temp->next->next;
            }
            temp = temp->next;
            count++;
        }
        delete toDelete;
        return head;
    }
}

void insertAtTail(node* &head, int val){
    
    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
       
        temp=temp->next;
    }
    temp->next = n;
     
}

display(node* head){
    node * temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}
int main()
{
    node* head = NULL;

    int arr[]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head, arr[i]);
    }

    display(head);
    removeNthFromEnd(head, 2);
    display(head);
    return 0;
}