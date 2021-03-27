Q: Print the right view of binary tree. 

Concept: Level order traversal

vector<int> Rightview(TNode* root){
    vector<int> ans;
    vector<TNode*> p0;
    vector<TNode*> p1;
    p0.push_back(root);
    while(p0.size()){
        ans.push_back(p0.back()->val);
        for(auto &n: p0){
            if(n->left)
                p1.push_back(n->left);
            if(n->right)
                p1.push_back(n->right);
        }
        p0.swap(p1);
        p1.clear();
    }
    return ans;
}

for left view use p0[0] instead of p0.back()