#include<bits/stdc++.h>
using namespace std;
vector<int> processor(vector<int> a, int k){
    unordered_map<int, int> m;
    int counter = 0;
    vector<int> ans;
    for(int i = 0; i < k; i++){
        if(m[a[i]] == 0){
            counter++;
        }
            m[a[i]]+=1;
        
    }
    ans.push_back(counter);
    for(int i = k; i < a.size(); i++){
        if(m[a[i - k]] == 1) //==1 not >=1 because if m[a[i-k]] == 2 then the number will be consider in window so counter-- will effect resultds  
            counter--;
        m[a[i-k]]-=1;
        if(m[a[i]] == 0){
            counter++;
            
        }
        m[a[i]]++;
        ans.push_back(counter);
    }
    return ans;
}
int main(void){
    vector<int> a = {2,3,2,4,5,5,6,7,8,5,6};
    int k = 3;
    vector<int> ans = processor(a, k);
    for(auto i : ans){
        cout<<i<<endl;
    }
}