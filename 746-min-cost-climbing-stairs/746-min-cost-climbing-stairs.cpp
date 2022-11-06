class Solution {
public:
    int solve(vector<int> &cost, vector<int> &dp, int index)
    {
        if(index >= cost.size()) return 0;
        
        if(index == cost.size() - 1) return cost[index];
        
        if(dp[index] != INT_MAX) return dp[index];
        
        return dp[index] = (cost[index] + min(solve(cost, dp, index + 1), solve(cost, dp, index + 2)));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), INT_MAX);
        
        return min(solve(cost, dp, 0), solve(cost, dp, 1));
    }
};