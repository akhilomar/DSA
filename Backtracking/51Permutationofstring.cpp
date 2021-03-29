Q: Given a string, find its all possible permutation


void Permutation(string s){
    vector<string> ans;
    Processor(s, ans, 0, s.size() - 1);
}

void Processor(string s, vector<int>& ans, int l, int r){
    if(l == r)
        ans.push_back(s);
    else{
        for(int i = l; i <= r; i++){
            swap(s[i], s[l]);
            Processor(s, ans, l+1, r);
            swap(s[i], s[l]); //backtracking
        }
    }
}