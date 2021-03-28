Inorder


void Inorder(TNode* root){
    if(!root)
        return;
    Inorder(root->left)
    cout<<root->val;
    Inorder(root->right);
}


NOTE: It gives sorted array in ascending order