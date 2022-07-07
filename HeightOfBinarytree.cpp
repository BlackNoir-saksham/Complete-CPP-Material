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
/*         1
          / \
         2   3
        /   / \
       4   6   7               
*/
int height()

int main()
{
    Node *root = new Node(1); // level 0

    root->left = new Node(2); // level 1
    root->right = new Node(3);

    root->left->left = new Node(4); // level 2
    root->left->right = new Node(nullptr);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<sumOfLeftLeaf(root);
    return 0;
}