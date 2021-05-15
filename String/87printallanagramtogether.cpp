// Q: Print all the anagrams together. 
// Example Input: cat, dog, god, act
// output: {{cat, act}, {dog, god}}

vector<vector<int>> gAngrm(vector<string> str){
    unordered_map<string, int> m;
    vector<vector<string>> ans;
    for(auto i : str){
        string copy = i;
        sort(copy.begin(), copy.end());
        if(m.find(copy))
            ans[m[copy]].push_back(i);
        else{
            ans.push_back(vector<string>(1, i));
            m[copy] = ans.size() - 1;
        }
    }
    return ans;
}