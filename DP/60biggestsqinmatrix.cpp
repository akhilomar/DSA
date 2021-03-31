Q: Given 2D matrix, find biggest square of 1 in the matrix

void square(vector<vector<int>> a){
    vector<vector<int>> dp(a.size(), vector<int>(a[0].size(), 0));
    int max_s, max_i, max_j;
    for(int i = 0; i < a.size(); i++)
        dp[i][0] = a[i][0];
    for(int j = 0; j < a[0].size(); j++)
        dp[0][j] = a[0][j];

    for(int i = 1; i < a.size(); i++)
        for(int j = 1; j < a[0].size(); j++){
            if(a[i][j] == 1){
                dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1])) + 1;
            }
            else{
                dp[i][j] = 0;
            }    
        }

        max_s = dp[0][0];
        max_i = 0;
        max_j = 0; 

    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a[0].size(); j++){
            if(max_s < dp[i][j]){
                max_s = dp[i][j];
                max_i = i;
                max_j = j;
            }
        }

        for(int i = max_i; i > max_i - max_s; i--)
            for(int j = max_j; j > max_j - max_s; j--)
                cout<<a[i][j];
}


TIME COMPLEXITY : O(m*n)