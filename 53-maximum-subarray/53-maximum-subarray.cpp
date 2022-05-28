class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempMaxSum = 0;
        int maxSum = INT_MIN;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            tempMaxSum = max(nums[i], nums[i] + tempMaxSum);
            maxSum = max(maxSum, tempMaxSum);
        }
        return maxSum;
    }
};