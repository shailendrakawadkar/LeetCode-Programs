class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> um;
        
        int i = 0, j = 0, temp_sum = 0;
        int ans = INT_MIN;
        
        while(i < nums.size())
        {
            if(um[nums[i]] == 1)
            {
                ans = max(temp_sum, ans);
                --um[nums[j]];
                temp_sum -= nums[j];
                ++j;
            }
            else
            {
                ++um[nums[i]];
                temp_sum += nums[i];
                ++i;
            }
        }
        
        ans = max(ans, temp_sum);
        return ans;
    }
};