class Solution {
public:
    
    bool isValidMove(int i, int j, int n, int m)
    {
        return (i > -1 && i < n && j > -1 && j < m);
    }
    
    void traverseLand(vector<vector<bool>> &visited, vector<vector<char>>& grid, int i, int j)
    {
        if(visited[i][j]) return;
        
        
        visited[i][j] = true;
        
        if(grid[i][j] == '0') return;
        else
        {
            if(isValidMove(i - 1, j, grid.size(), grid[0].size()) && !visited[i - 1][j])
                traverseLand(visited, grid, i - 1, j);
            if(isValidMove(i, j - 1, grid.size(), grid[0].size()) && !visited[i][j - 1])
                traverseLand(visited, grid, i, j - 1);
            if(isValidMove(i + 1, j, grid.size(), grid[0].size()) && !visited[i + 1][j])
                traverseLand(visited, grid, i + 1, j);
            if(isValidMove(i, j + 1, grid.size(), grid[0].size()) && !visited[i][j + 1])
                traverseLand(visited, grid, i , j + 1);
        }   
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        
        int no_of_islands = 0;
        
        for(int i = 0; i < grid.size(); ++i)
        {
            for(int j = 0; j < grid[i].size(); ++j)
            {
                if(!visited[i][j] )
                {
                    if(grid[i][j] == '1')
                    {
                        no_of_islands++;
                        traverseLand(visited, grid, i, j);
                    }
                    visited[i][j] = true;
                }
            }
        }
        
        return no_of_islands;
    }
};