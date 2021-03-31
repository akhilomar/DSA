Q: Find the level of given node in BTree


RECURSIVE

void LevelBT(TNode* root, int x, int l){
    if(!root)
        return;
    if(root -> val == x)
         cout<<l;
    LevelBT(root->left, x, l+1);
    LevelBT(root->right, x, l+1);
}

value of l is passed as 0 initially

ITERATIVE

void LevelBT(TNode* root, int x, int l){
    if(!root)
        return;
    vector<TNode*> v1, v2;
    v1.push_back(root);
    int l = 1;
    while(v1.size()){
        for(auto i : v1){
            if(i -> val == x){
                cout<<l;
                return;
            }
            if(i->left)
                v2.push_back(i->left);
            if(i->right)
                v2.push_back(i->right);

        }
        v1.swap(v2);
        v2.clear();
        l++;
    }
}