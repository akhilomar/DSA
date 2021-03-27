Anagram: word formed by rearranging the letter from string

Q: Given a string s and string p, find index of all anagram of p in s.

#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans;
    vector<int> ssum(26 , 0);
    vector<int> psum(26, 0);
    for(auto i : p)
        psum[i - 'a']++;
    for(int i = 0; i < s.size(); i++){
        ssum[s[i] - 'a']++;
        if(i > p.size() - 1)
            ssum[s[i - p.size()] - 'a']--;
        if(psum == ssum)
            ans.push_back(i - p.size() + 1);
    }
    for(auto x : ans)
        cout<<x<<endl;
}