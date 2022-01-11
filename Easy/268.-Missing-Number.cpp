//Runtime: 16 ms, faster than 86.13% of C++ online submissions for Missing Number.
//Memory Usage: 18 MB, less than 63.29% of C++ online submissions for Missing Number.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsSize = nums.size();
        int sumMax = numsSize * (numsSize + 1) / 2;
        int sum = 0;
        for(int i  = 0; i < numsSize; ++i)
        {
            sum += nums[i];
        }
        
        return sumMax - sum;
    }
};
