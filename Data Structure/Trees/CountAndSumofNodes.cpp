#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int countNodes(Node* &root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right)+ 1;
}
int sumOfNodes(Node* &root){
    if(root==NULL){
        return 0;
    }
    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

int main()
{
    Node *root = new Node(1); // level 0

    root->left = new Node(2); // level 1
    root->right = new Node(3);

    root->left->left = new Node(4); // level 2
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"Total Nodes: "<<countNodes(root)<<endl;
    cout<<"Sum of Nodes: "<<sumOfNodes(root)<<endl;
    return 0;
}