Q: K largest elements in a given array

vector<int> klargest(vector<int> nums, int k){
    priority_queue<int, vector<int>, greatest<int>> pq;
    vector<int> ans;
    int i;
    for(i = 0; i < k; i++)
        pq.push(nums[i]);
    for(i = k; i < nums.size(); i++){
        if(pq.top() < nums[i]){
            pq.pop();
            pq.push(nums[i]);
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}