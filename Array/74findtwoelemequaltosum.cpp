Q: Check wether there exist pair whose sum is qual to given sum in an array containing both positive and negative element.

bool check(vector<int> a, int sum){
    unordered_set<int> s;
    for(auto i: a){
        int temp = sum - i;
        if(s.find(temp) != s.end())
            return true;
        s.insert(i);    // to ignore duplicacy we used set
    }
}