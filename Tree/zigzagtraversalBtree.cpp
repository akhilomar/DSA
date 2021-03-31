Q: Print ZigZag Traversal in Binary Tree

vector<vector<int>> ZigZag(TNode* root){
    if(!root)
        return;
    vector<vector<int>> ans;
    vector<TNode*> v1, v2;
    v1.push_back(root);
    bool rev = false;
    while(v1.size()){
        vector<int> temp;
        for(auto i : v1)
            temp.push_back(i);
        if(rev){
            reverse(temp.begin(), temp.end());
            rev = true;
        }
        else
            rev = true;

        ans.push_back(temp);
        for(auto i : v1){
            if(v1->left)
                v2.push_back(v1->left);
            if(v1->right)
                v2.push_back(v1->right);
        }
        v1.swap(v2);
        v2.clear();         
    }
}