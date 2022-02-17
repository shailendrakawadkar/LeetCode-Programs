//Runtime: 128 ms, faster than 62.46% of C++ online submissions for Maximum Subarray.
//Memory Usage: 67.7 MB, less than 91.30% of C++ online submissions for Maximum Subarray.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, tempSum = 0;
        for(int i = 0; i < nums.size(); ++i)
        {    
            tempSum += nums[i];
            maxSum = max(maxSum, tempSum);
            
            if(tempSum < 0) tempSum = 0;
        }
        return maxSum;
    }
};
