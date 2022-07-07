#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

ListNode* mergeNodes(ListNode* &head){
    
    ListNode* p1 = head->next;
    ListNode* p2 = head->next;
    ListNode* dummy = new ListNode(-1);
    ListNode* p3 = dummy;
    int sum=0;
    while(p2 != NULL){
        if(p1->data != 0){
            sum += p1->data;
            p1=p1->next;
            p2=p2->next;
        }else{
            ListNode* n = new ListNode(sum);
            p3->next = n;
            sum=0;
            p3=p3->next;
            p1=p1->next;
            p2=p2->next;
        }
    }
    return dummy->next;

}

void insertAtTail(ListNode* &head, int val)
{

    ListNode *n = new ListNode(val);

    if (head == NULL)   //  iF Linked List is already empty
    {
        head = n;
        return;
    }

    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    ListNode *head = NULL;
    
    display(head);
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 0);
    insertAtTail(head, 3);
    insertAtTail(head, 0);
    insertAtTail(head, 2);
    insertAtTail(head, 2);
    insertAtTail(head, 0);
    display(head);
    ListNode* newhead = mergeNodes(head);
    display(newhead);
    return 0;
}