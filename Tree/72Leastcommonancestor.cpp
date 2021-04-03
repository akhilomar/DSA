Q: Least common ancestor (LCA) of two nodes in BTree


TNode* LCA(TNode* root, TNode* p, TNode* q){
     if(root == p || root == q)
        return root;
    if(root->left && root ->right){
        TNode* l = LCA(root->left, p, q);
        TNode* r = LCA(root->right, p, q);
        if(l && r)
            return root;
        if(l)
            return l;
        return r;
    }

    if(root->left){
        return LCA(root->left, p , q);
    }
    if(root->right)
        return LCA(root->right, p, q);
    return NULL;
}