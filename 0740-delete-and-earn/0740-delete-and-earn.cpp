class Solution {
public:
    
    int solve(vector<int>& arr, int index, vector<int>& dp)
    {
        if(index == arr.size() - 1) return index * arr[index];
        
        if(index >= arr.size()) return 0;
        
        if(dp[index] != -1) return dp[index];
        
        //pick
        int pick = index * arr[index] + solve(arr, index + 2, dp);
        
        //non pick
        int nonpick = solve(arr, index + 1, dp);
        
        return dp[index] = max(pick, nonpick);
    }
    
    int deleteAndEarn(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        
        vector<int> arr(maxi + 1, 0), dp(maxi + 1, -1);
        
        for(int i = 0; i < nums.size(); ++i) arr[nums[i]]++;
        
        return solve(arr, 0, dp);
    }
};