class Solution {
public:
    
    int solve(vector<int>& nums, int index, vector<int> &dp)
    {
        if(index >= nums.size()) return 0;
        if(index == nums.size()) return nums[index];
        
        if(dp[index] != -1) return dp[index];
        
        //pick
        int pick = nums[index] + solve(nums, index + 2, dp);
        
        //not pick
        int notpick = solve(nums, index + 1, dp);
        return dp[index] = max(pick, notpick);
    }
    
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> temp1, temp2;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i != 0) temp1.push_back(nums[i]);
            
            if(i != nums.size() - 1) temp2.push_back(nums[i]);
        }
        
        vector<int> dp1(temp1.size(), -1), dp2(temp1.size(), -1);
        
        int fmax = solve(temp1, 0, dp1);
        int smax = solve(temp2, 0, dp2);
        
        return max(fmax, smax);
    }
};