// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//         int data;
//         node* left;
//         node* right;

//         node(int val){
//             data=val;
//             left=NULL;
//             right=NULL;
//         }
// };

// int search(int inorder[], int start, int end, int curr){
//     for(int i=start; i<=end; i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }

// node* buildTree(int preorder[], int inorder[], int start, int end){
//     static int idx = 0;
//     if(start>end){
//         return NULL;
//     } 

//     int curr = preorder[idx];
//     idx++;
//     node* n = new node(curr);
//     if(start==end){
        
//         return n;
//     }
//     int pos = search(inorder, start, end, curr);
//     n->left = buildTree(preorder, inorder, start, pos-1);
//     n->right = buildTree(preorder, inorder, pos+1, end);

//     return n;
// }

// void preorderPrint(node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorderPrint(root->left);
//     preorderPrint(root->right);
// }

// int main(){
//     int preorder[]={3,9,20,15,7};
//     int inorder[]={9,3,15,20,7};
//     int m = sizeof(preorder)/sizeof(preorder[0]);
    
//     node* root = buildTree(preorder, inorder, 0, m-1);
//     preorderPrint(root);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
# define v vector<int>

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

int search(v &inorder, int curr, int start, int end){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
        
    }
    return -1;
}

node* buildTree(v &preorder, v &inorder,int start,int end){
    
    if(start>end){
        return NULL;
    }
    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    node* root = new node(curr);
    if(start==end){
        return root;
    }
    int pos = search(inorder, curr, start, end);
    root->left = buildTree(preorder, inorder, start, pos-1);
    root->right = buildTree(preorder, inorder, pos+1, end);
    return root;
}

void preorderPrint(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main(){
    
    v preorder = {3,9,20,15,7};
    v inorder = {9,3,15,20,7};
    int size = preorder.size();
    
    node* root = buildTree(preorder, inorder, 0, size-1);
    preorderPrint(root);
    return 0;
}