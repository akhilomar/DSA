Q: Find the distance between two given nodes of binary tree

TNode* Ancestor(TNode* root, int n1, int n2){
    if(n1 == root -> val || n2 == root -> val)
        return root;
    if(root ->left && root->right){
        TNode* l = Ancestor(root -> left, n1, n2);
        TNode* r = Ancestor(root -> right, n1, n2);
        if(l && r){
            return root;
        }
        else if(l)
            return l;
        else 
            return r;
    }
    if(root ->left){
        return Ancestor(root->left, n1, n2);
    }

    if(roo -> right)
        return Ancestor(root->right, n1, n2);

    return NULL;
}

int level(TNode* root, int n , int lvl){
    if(!root)
        return -1;
    if(root -> val == n)
        return lvl;
    int left = level(root->left, n, lvl+1);
    if(left == -1)
        return level(root->right, n, lvl+1);
    return left;
}


int Distance(TNode* root, int n1, int n2){
    TNode* LCA = ancestor(root, n1, n2);
    int d1 = level(LCA, n1, 0);
    int d2 = level(LCA, n2, 0);
    return d1+d2;
}

