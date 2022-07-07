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

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL) //  iF Linked List is already empty
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

void deletionAtHead(node *&head)
{
    node* toDelete = head;
    head = head->next;

    delete toDelete;

}

void deletion(node *&head, int val)
{

    if(head == NULL){  // Corner Cases
        return;
    }
    if(head->next == NULL){
        deletionAtHead(head);
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
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
    cout<<"Inserting elements at Tail"<<endl;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    cout<<"Deleting node with value 3"<<endl;
    deletion(head, 3);
    display(head);
    cout<<"Deleting Head node"<<endl;
    deletionAtHead(head);
    display(head);
    return 0;
}