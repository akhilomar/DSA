Q: Postorder

void Postorder(TNode* root){
    if(!root)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val;
}




NOTE: It gives Sorted array in descending order