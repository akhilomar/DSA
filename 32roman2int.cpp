Q: Convert Roman to Integer

int R2I(string s){
    unordered_map<char, int> m = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    }
};

int ans = 0;

for(int i = s.size() - 1, follow = -1, i >= 0; i--){
    if(follow == -1 || m[s[i]] >= m[s[follow]]){
        ans += m[s[i]];
        follow = i;
    }
    else{
        ans -= m[s[i]];
    }
    return ans;
}