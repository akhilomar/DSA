Q: We need to check wether path exist upto the bottom right end.

here 1 means can be travel and 0 means no path. 

bool isSafe(vector<vector<int>> maze, int x, int y){
    if(x >=0 && y >= 0 && x < maze.size() && y < maze.size())
        return true;
    return false;
}

bool isPathExist(vector<vector<int>> maze, vector<vector<int>>& S, int x, int you){
     if(x == maze.size() - 1 && y == maze[0].size() - 1)
        return true;
    if(isSafe(maze, x, y)){
        S[x][y] = 1;
        if(isPathExist(maze, S, x+1, y)
            return true;
        if(isPathExist(maze, S, x, y+1))
            return true;
        S[x][y] = 0;
    } 
    return false;
}  


S = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
}

maze = {
    {1, 0, 0},
    {1, 1, 0},
    {0, 1, 1}
}