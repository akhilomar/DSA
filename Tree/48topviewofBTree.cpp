Q: Top View Of Binary tree

Recursive

void TopView(TNode* root, int hd, int l, unordered_map<int, pair<int, int>>& m){
    if(!root)
        return;
    if(m[hd].count() == 0)
        m[hd] = make_pair(root->val, l);
    else if(m[hd].second > l)
        m[hd] = make_pair(root->val, l);
    else{
        do nothing
    }

    TopView(root->left, hd - 1, l+1, m);
    TopView(root->right, hd + 1, l+1, m);
}

void PrintTopView(TNode* root){
    unordered_map<int, pair<int ,int>> m;
    TopView(root, 0, 0, m);
    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it.first<<" ";
    }
}

//Here HD is height difference
//For left hd = hd - 1
//For right hd = hd + 1

Iterative

void TopView(TNode* root){
    queue<TNode*> q;
    map<int, int> m;
    root->hd = 0;
    int hd = 0;
    q.push(root);
    while(q.size()){
        hd = root -> hd;
        if(m.count(hd) == 0)
            m[hd] = root->val;
        if(root->left){
            q.push(root->left);
            root->left->hd = hd - 1;
        }
        if(root->right){
            q.puhs(root->right);
            root->right->hd = hd+1;
        }
        q.pop();
        root = q.front();
    }
}