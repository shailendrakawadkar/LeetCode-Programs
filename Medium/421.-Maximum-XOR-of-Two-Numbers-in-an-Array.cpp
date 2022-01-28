class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maximum = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i + 1; j < nums.size(); ++j)
                maximum = max(nums[i]^nums[j], maximum);
        }
        return maximum;
    }
};
