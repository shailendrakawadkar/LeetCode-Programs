class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> output;
        int i = 0, j = nums.size() - 1;
        
        while(i <= j)
        {
            if(abs(nums[i]) > abs(nums[j]))
            {
                output.insert(output.begin(), abs(nums[i]) * abs(nums[i]));
                ++i;
            }else
            {
                output.insert(output.begin(), abs(nums[j]) * abs(nums[j]));
                --j;
            }
        }
        return output;
    }
};