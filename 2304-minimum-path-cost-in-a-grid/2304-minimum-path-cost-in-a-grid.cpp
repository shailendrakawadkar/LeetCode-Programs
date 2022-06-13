class Solution {
public:
    void getMinPath(vector<vector<int>>& grid, vector<vector<int>>& moveCost, vector<vector<int>> &dp, int r)
    {
        if(r == -1) return;
        
        for(int i = 0; i < grid[r].size(); ++i)
        {
            int mini = INT_MAX;
            for(int j = 0; j < grid[r + 1].size(); ++j)
            {
                mini = min(mini, grid[r][i] + moveCost[grid[r][i]][j] + dp[r + 1][j]);
            }
            dp[r][i] = mini;
            cout << dp[r][i];
        }
        return getMinPath(grid, moveCost, dp, r - 1);
    }
    
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        vector<vector<int>> dp = grid;
        
        for(int i = 0; i < grid[grid.size() - 1].size(); ++i)
        {
            dp[grid.size() - 1][i] = grid[grid.size() - 1][i];
        }
        
        getMinPath(grid, moveCost, dp, grid.size() - 2);
        
        return *min_element(dp[0].begin(), dp[0].end());
    }
};