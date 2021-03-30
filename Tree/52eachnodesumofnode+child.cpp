Q: Transform Binary Tree such that each node is the sum of node and its children

#include<bits/stdc++.h>
using namespace std;
class TNode{
  public:
    TNode* left;
    TNode* right;
    int val;
    TNode(int x){
        left = NULL;
        right = NULL;
        val = x;
    }
};

int Processor(TNode* root){
    if(!root)
        return 0;
    root->val = Processor(root->left)+Processor(root->right)+root->val;
    return root->val;
}


void BTNCS(TNode* root){
    if(!root)
        return;
    int ans = Processor(root);
}


void Display(TNode* root){
    if(!root) 
        return;
    Display(root->left);
    cout<<root->val<<" ";
    Display(root->right);
}

int main(void){
    TNode* root = new TNode(6);
    root->left = new TNode(5);
    root->right = new TNode(7);
    root->left->left = new TNode(4);
    root->left->right = new TNode(3);
    root->right->left = new TNode(9);
    root->right->right = new TNode(2);
    Display(root);
    cout<<endl;
    Processor(root);
    Display(root);
 }