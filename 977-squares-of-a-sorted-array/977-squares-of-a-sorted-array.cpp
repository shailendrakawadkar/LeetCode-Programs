class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> output(nums.size());
        int i = 0, j = nums.size() - 1, k = nums.size() - 1;
        
        while(i <= j)
        {
            if(abs(nums[i]) > abs(nums[j]))
            {
                output[k] = abs(nums[i]) * abs(nums[i]);
                k--;
                ++i;
            }else
            {
                output[k] = abs(nums[j]) * abs(nums[j]);
                --j;
                k--;
            }
        }
        return output;
    }
};