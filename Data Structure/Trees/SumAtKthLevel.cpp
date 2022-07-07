#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data= val;
            left= NULL;
            right= NULL;
        }
};

int sumAtK(Node* root, int k){
    queue<Node*> q;
    int t=0; //
    q.push(root);
    q.push(NULL);
     int level=0;
     int sum=0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){   // if node is not null and queue is not empty
            if(level==k){
                sum += node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            t = max(t,sum); //
        }
        else if(!q.empty()){   // if node is NULL and queue is not empty
            q.push(NULL);
            
            level++;
        }
    }
    cout<<t<<endl; //
    return sum;
}

int main(){
    Node* root = new Node(1);  //level 0

    root->left = new Node(2);   //level 1
    root->right = new Node(3);

    root->left->left = new Node(4);   // level 2
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<sumAtK(root, 1);
     return 0;
}