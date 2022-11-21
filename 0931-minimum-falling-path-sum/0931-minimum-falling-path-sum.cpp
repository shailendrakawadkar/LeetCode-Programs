class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& matrix, int n, vector<vector<int>>& dp)
    {
        if(j < 0 || j >= n) return INT_MAX;
        
        if(i == n - 1) return matrix[i][j];
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int a = solve(i + 1, j, matrix, n, dp);
        int b = solve(i + 1, j - 1, matrix, n, dp);
        int c = solve(i + 1, j + 1, matrix, n, dp);
        
        return dp[i][j] = matrix[i][j] + min({a, b, c});
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int ans = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            ans = min(ans, solve(0, i, matrix, n, dp));
        }
        return ans;
    }
};