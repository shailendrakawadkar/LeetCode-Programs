class Solution {
public:
    int solve(string& str1, string& str2, int i, int j, vector<vector<int>>& dp)
    {
        if(i == str1.size() || j == str2.size()) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int ans = 0;
        if(str1[i] == str2[j]) ans = 1 + solve(str1, str2, i + 1, j + 1, dp);
        else ans = max(solve(str1, str2, i + 1, j, dp), solve(str1, str2, i, j + 1, dp));
        
        return dp[i][j] = ans;
    }
    
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string str1 = s;
        string str2 = s;
        reverse(str2.begin(), str2.end());
        vector<vector<int>> dp(n, vector<int>(n, -1));
        
        return solve(str1, str2, 0, 0, dp);
    }
};