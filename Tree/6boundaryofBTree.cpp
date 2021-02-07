#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

void leftNode(Node* root){
    if(!root)
        return;
    if(root->left){
        cout<<root->val<<" ";
        leftNode(root->left);
    }
    else if(root->right){
        cout<<root->val<<" ";
        leftNode(root->right);
    }  

}

void leafNode(Node* root){
    if(!root)
        return;
    leafNode(root->left);
    if(!root->left && !root->right)
        cout<<root->val<<" ";
    leafNode(root->right);
}

void rightNode(Node* root){
    if(!root)
        return;
    if(root->right){
        rightNode(root->right);
        cout<<root->val<<" ";
    }
    else if(root->left){
        rightNode(root->left);
        cout<<root->val<<" ";
    }

}

int main(void){
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right->right = new Node(25);
    leftNode(root);
    leafNode(root);
    rightNode(root->right);
}