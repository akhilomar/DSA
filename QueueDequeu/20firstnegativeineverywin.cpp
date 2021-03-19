Q: First negative number in every window of size k

#include<bits/stdc++.h>
using namespace std;
 
vector<int> fnegative(vector<int> nums, int k){
    deque<int> dq;
    int i;
    vector<int> ans;
    for(i = 0; i < k; i++)
        if(nums[i] < 0)
            dq.push_back(i);
    for(; i < nums.size(); i++){
        if(!dq.empty())
            ans.push_back(nums[dq.front()]);
       else 
           ans.push_back(0);
        while((!dq.empty()) && dq.front() < (i - k + 1))
            dq.pop_front();
        if(nums[i] < 0)
            dq.push_back(i);
    }
    if(!dq.empty())
        ans.push_back(nums[dq.front()]);
    else
        ans.push_back(0);
    return ans;
}
int main(void){
    vector<int> nums = {2, -1, 3, 4, -2, 9, 8, -6};
    vector<int> ans = fnegative(nums, 3);
    for(auto i : ans){
        cout<<i<<" ";
    }
}