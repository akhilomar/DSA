// 1: At most 1 transaction

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int buy = INT_MAX;
        int sell = INT_MIN;
        for(auto i : prices){
            if(buy > i)
                buy = i;
            sell = max(sell, i - buy);
        }
        return sell;
    }
};


//2: Any Number of transaction

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int ans = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i - 1])
                ans += prices[i] - prices[i - 1];
        }
        
        return ans;
    }
};


//3: Only two transaction

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        vector<vector<int>> dp(3, vector<int>(prices.size(), 0));
        for(int i = 1; i < 3; i++){
            int diff = -prices[0];
            for(int j = 1; j < prices.size(); j++){
                dp[i][j] = max(dp[i][j - 1], prices[j] + diff);
                diff = max(diff, dp[i - 1][j] - prices[j]);
            }
        }
        return dp[2][prices.size() - 1];
    }
};