Q: We need to find the count of maximum connected island.  Island is represented by 1

int largestisland(vector<vector<int>> island){
    int ans = 0;
    for(int i = 0; i < island.size(); i++)
        for(int j = 0; j < island[0].size(); j++){
            if(island[i][j] == 1)
                ans = max(Processor(island, i, j), ans);
        }
        return ans;
}

int Processor(vector<vector<int>>& island, int i, int j){
     island[i][j] = 2;
     int ans = 1;
     if(i < island.size() - 1 && island[i+1][j] == 1)
        ans+=Processor(island, i+1, j);
    if(j < island[0].size() - 1 && island[i][j+1] == 1)
        ans+=Processor(island, i, j+1);
    if(i > 0 && island[i - 1][j] == 1)
        ans+=Processor(island, i-1, j);
    if(j > 0 && island[i][j-1] == 1)
        ans+=Processor(island, i, j - 1);
    return ans;
}