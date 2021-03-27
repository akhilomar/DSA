Q: Given arrary, find the largest possible number which can be formed from it.

#include<bits/stdc++.h>
using namespace std;
int main(void){
    vector<int> a = {3,30,34,5,9};
    sort(a.begin(), a.end(), [](int &a, int &b){
        return to_string(a)+to_string(b) > to_string(b)+to_string(a);
    });
    string ans = "";
    for(auto i : a)
        ans+=to_string(i);
    cout<<ans;
}


concept: a+b>b+a in string form, if condition false then swap