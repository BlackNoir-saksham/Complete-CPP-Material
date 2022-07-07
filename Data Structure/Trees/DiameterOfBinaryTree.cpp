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

int height(Node* node,int& d){
            if(node==NULL)
                return 0;
        int lh=height(node->left,d);
        int rh=height(node->right,d);
        
        d=max(d,lh+rh);
        

        return 1 + max(lh,rh);
    
    }
    int calcDiameter(Node* root) {
        int d=0;
        height(root,d);
        return d;
    }

int main()
{
    Node *root = new Node(1); // level 0

    root->left = new Node(2); // level 1
    root->right = new Node(3);

    root->left->left = new Node(4); // level 2
    root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
   cout<<endl<<calcDiameter(root);
   
    return 0;
}