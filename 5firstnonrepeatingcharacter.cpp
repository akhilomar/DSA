
// we need to find "first" non repeating not all non repeating

#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s = "geeksforgeeks";
    vector<int> m(26, -1);
    for(int i = 0; i < s.size(); i++){
        if(m[s[i] - 'a'] == -1)
            m[s[i] - 'a'] = i;
        else
            m[s[i] - 'a'] = -2;
    }
    
    int res = INT_MAX;
    
    for(int i = 0; i < 26; i++){
        if(m[i] >= 0)
            res = min(res, m[i]);
    }
    string ans;
    if(res >= 0)
        ans = s[res];
    else
        ans = "NA";
    cout<<ans;
}