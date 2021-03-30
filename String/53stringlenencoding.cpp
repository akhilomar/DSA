Q: aaabbccc => a3b2c3

string Encode(string s){
    string ans;
    for(int i = 0; i < s.size(); i++){
        int count = 1;
        while(i < s.size() - 1 && s[i] == s[i+1]){
            i++;
            count++;
        }
        ans+=s[i]+to_string(count);
    }
    return ans;
}

It can also be implemented using unordered_map