class Solution {
public:
    int solve(int index, vector<int>& nums, vector<int>& dp)
    {
        if(index == nums.size() - 1) return 0;
        
        if(dp[index] != INT_MAX) return dp[index];
        
        int ans = INT_MAX;
        
        for(int i = index + 1; i <= index + nums[index] && i < nums.size(); ++i)
        {
            int ct = solve(i, nums, dp);
            if(ct != INT_MAX)
                ans = min ( ans, 1 + ct);
        }
        return dp[index] = ans;
    }
    
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), INT_MAX);
        return solve(0, nums, dp);
    }
};