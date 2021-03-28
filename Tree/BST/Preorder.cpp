Preorder in BST

void Preorder(TNode* root){
    if(!root)
        return;
    cout<<root->val;
    Preorder(root->left);
    Preorder(root->right);
}