//BST ALL OPERATION
//Insertion
//Deletion
//Creation

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

Node* Insert(Node *root, int x){
    if(!root)
        return new Node(x);    
    if(root->val > x)
        root->left = Insert(root->left, x);
    else
        root->right = Insert(root->right, x);
    return root;      
}



Node* minVal(Node* node){
    Node* cur = node;
    while(cur && cur -> left != NULL){
        cur = cur->left;
    }
    return cur;
}

Node* Delete(Node* root, int key){
    if(root == NULL)
        return root;
    if(key > root->val){
        root->right = Delete(root->right, key);
    }
    else if(key < root->val){
        root->left = Delete(root->left, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
            Node* temp = minVal(root->right);
            root->val = temp->val;
            root->right = Delete(root->right, temp->val);
    }
    return root;
}



void Inorder(Node* root){
    if(!root)
        return;
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}

int main(void){
    Node* root = new Node(100);
    root = Insert(root, 20);
    root = Insert(root, 500);
    root = Insert(root, 10);
    root = Insert(root, 30);
    root = Insert(root, 40);
    Inorder(root);
    root = Delete(root, 100);
    cout<<endl;
    Inorder(root);
}