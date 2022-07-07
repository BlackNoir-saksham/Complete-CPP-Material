#include<bits/stdc++.h>
using namespace std;

#define for(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>

class Node{
    public:
    int data;
    Node* left;
    Node* right; 

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insertBST(Node* &root, int val){

    if(root==NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }else{
        root->right = insertBST(root->right, val);
    }

    return root;
}
Node* searchInBST(Node* &root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return searchInBST(root->left, key);
    }
    if(root->data < key){
        return searchInBST(root->right, key);
    }
}

Node* deleteInBST(Node* &root, int key){
    if(key < root->data){
        root->left=deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right=deleteInBST(root->right, key);
    }
    else{
        if(root->left==NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root->right);
        root->data= temp->data;
    }


} 

void printInorder(Node* &root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    Node* root=NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 4);
    insertBST(root, 7);

    printInorder(root);

    int key = 5;
    cout<<endl;
    if(searchInBST(root, key)==NULL){
        cout<<"Key doesn't exist in TREE...";
    }else{
        cout<<"Key Exist in TREE...";
    }
    return 0;
}