class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid, int n, int m, vector<vector<int>> & dp)
    { 
        if(i >= n || j >= m) return INT_MAX;
        
        if(i == n - 1 && j == m - 1) return grid[i][j];
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int a = solve(i, j + 1, grid, n, m, dp);
        int b = solve(i + 1, j, grid, n, m, dp);
        
        return dp[i][j] = grid[i][j] + min(a, b);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, grid, n, m, dp);
    }
};