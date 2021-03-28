Q: Find pair with given sum in bst

bool findpair(TNode* root, int sum){
    if(!root)
        return false;
    
    vector<int> a;
    Inorder(root, a);
    int low = 0, high = a.size() - 1;
    while(low < high){
        if(a[low] + a[high] == sum)
            return true;
        else if(a[low] + a[high] > sum)
            high--;
        else
            low++;
    }
    return false;
}


void Inorder(Tnode* root, vector<int>& a){
    if(!root)
        return;
    Inorder(root->left);
    a.push_back(root->val);
    Inorder(root->right);
}