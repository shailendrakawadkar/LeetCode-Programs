class Solution {
public:
    int solve(vector<int>& coins, int amount, vector<int>& dp)
    {
        if(amount == 0) {
            return 0;
        }
        if(amount < 0) return INT_MAX;
        
        if(dp[amount] != -1) return dp[amount];
        
        int mini = INT_MAX;
        
        for(int i = 0; i < coins.size(); ++i)
        {
            int output = solve(coins, amount - coins[i], dp); 
            if(output != INT_MAX)
                mini = min(mini, output + 1);
        }
        
        return dp[amount] = mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        
        vector<int> dp(amount + 1, -1);
            
        int mini = INT_MAX;
        
        for(int i = 0; i < coins.size(); ++i)
        {
            int output = solve(coins, amount - coins[i], dp);
            if(output != INT_MAX)
                mini = min(mini, output + 1);
        }
        
        if(mini == INT_MAX) return -1;
        
        return mini;
    }
};