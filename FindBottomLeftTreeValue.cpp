#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
/*         1
          / \
         2   3
        / \ / \
       4  5 6  7
*/

void printPreorder(node *&root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int bottomLeftVal(node* root){
    if(root==NULL){
        return -1;
    }

    
    queue<node*> q;
    q.push(root);
    int ans =root->data;
    
    while(!q.empty()){
        int n=q.size();
         ans = q.front()->data;
        for(int i=0; i<n; i++){
            node* curr=q.front();
            q.pop();

            if(curr->left != NULL){
                q.push(curr->left);
            
            }
            if(curr->right != NULL){
                q.push(curr->right);
            
            }
        }
    }
    return ans;
}

int main()
{

    node *root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->left = new node(8);

    
    printPreorder(root);
    cout << endl;
    cout<<bottomLeftVal(root);
    return 0;
}