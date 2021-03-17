class Solution {
    
    
  
public:
    
      bool check(int i, int j, vector<vector<int>> grid){
        if(i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == 1)
            return true;
        return false;
    }
    
    
    
    int orangesRotting(vector<vector<int>>& grid) {
       if(grid.empty())
           return 0;
        queue<pair<int, int>> q;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == 2)
                    q.push({i, j});
        int ans = 0;
        while(!q.empty()){
            int c = q.size();
            while(c--){
                for(int i = -1; i < 2; i++)
                    for(int j = -1; j < 2; j++){
                        if(abs(i) != abs(j) && check(i+q.front().first, j+q.front().second, grid)){
                            grid[i+q.front().first][j+q.front().second] = 2;
                            q.push({i+q.front().first, j + q.front().second});
                        } 
                    }
              q.pop();
            }
              if(!q.empty())
                    ans++;
        }
        
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == 1)
                    return -1;        
        return ans;                    
    }
};