#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        val = val;
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

void printPreorder(TreeNode *&root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int widthOfTree(TreeNode* &root){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL and root->right==NULL){
        return 1;
    }
    int level=1;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    int i=1;
    vector<int> res;
    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr != NULL){
            // cout<<curr->val<<" ";
            res.push_back(i);
            i++;
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
            res.clear();
            // cout<<res.size()<<endl;
        }
    }
    for(auto x:res){
        cout<<x<<" ";
    }cout<<endl;
    
        return *max_element(res.begin(), res.end()) - *min_element(res.begin(), res.end())+1;
}

int main()
{

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    // root->right->right->left = new TreeNode(8);

    
    cout<<widthOfTree(root);
    return 0;
}