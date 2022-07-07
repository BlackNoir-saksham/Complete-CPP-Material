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

int search(vector<int> &inorder, int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node *buildTree(vector<int> &inorder, vector<int> &postorder, int start, int end)
{
    static int idx = end;
    if(start>end){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    node *n = new node(curr);
    if(start==end){
        return n;
    }   
    int pos = search(inorder, start, end, curr);
    n->right = buildTree(inorder, postorder, pos + 1, end);
    n->left = buildTree(inorder, postorder, start, pos - 1);

    return n;
}

void printPostorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
    vector<int> postorder = {4, 5, 2, 6, 7, 3, 1};
    int m = inorder.size();
    node *root = buildTree(inorder, postorder, 0, m - 1);
    printPostorder(root);
    return 0;
}