class Solution {
public:
    int solve(vector<vector<int>>& triangle, int i, int j, int m, vector<vector<int>>& dp)
    {
        if(i >= m || j >= m) return 0;
        
        if(i == m - 1) return triangle[i][j];
        
        if(dp[i][j] != -1) return dp[i][j];
        
        return dp[i][j] = (triangle[i][j] + min(solve(triangle, i + 1, j, m, dp), solve(triangle, i + 1, j + 1, m, dp)));
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1));
        int m = triangle.size();
        return solve(triangle, 0, 0, m, dp);
    }
};