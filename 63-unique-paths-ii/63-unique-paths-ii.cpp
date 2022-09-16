class Solution {
public:
    
    int paths(vector<vector<int>>& obstacleGrid, int i, int j, int m, int n, vector<vector<int>>& dp)
    {
        
        if(obstacleGrid[i][j] == 1) return 0;
        
        if(i == m - 1 && j == n - 1) return 1;
        
        if(i > m - 1 || j > n - 1) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int down = 0, right = 0;
        
        // down;
        if(i + 1 < m && obstacleGrid[i + 1][j] == 0)
        {
            down = paths(obstacleGrid, i + 1, j, m , n, dp);
        }
        
        // right;
        if(j + 1 < n && obstacleGrid[i][j + 1] == 0)
        { 
            right = paths(obstacleGrid, i, j + 1, m , n, dp);
        }
        
        return dp[i][j] = down + right;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size(); 
        
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        return paths(obstacleGrid, 0, 0, m, n, dp);
    }
};