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

int height(node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}

bool balancedTree(node *&root)
{

    if (root == NULL)
    {
        return true;
    }
    if (balancedTree(root->left) == false)
    { // if one is false then all are false
        return false;
    }
    if (balancedTree(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    return false;
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

    cout << "PREORDER" << endl;
    cout << balancedTree(root) << endl;
    printPreorder(root);
    cout << endl;
    return 0;
}