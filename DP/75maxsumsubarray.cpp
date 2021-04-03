Q: Find max sum subarray from array containing positive and negative element both

int sum(vector<int> a){
    vector<int> dp(a.size());

    dp[0] = a[0];
    for(int i = 1; i < a.size(); i++){
        if(dp[i - 1] > 0)
            dp[i] = dp[i - 1] + a[i];
        else 
            dp[i] = a[i];
    }

    return *max_element(dp);
}