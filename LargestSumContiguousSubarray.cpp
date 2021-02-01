//Q:3
//Leetcode 53

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            dp[i] = dp[i-1]+nums[i] > nums[i]? dp[i-1]+nums[i]: nums[i];
        }
        int ans = *max_element(dp.begin(), dp.end());
        return ans;
    }
};