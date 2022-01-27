//Runtime: 58 ms, faster than 10.97% of C++ online submissions for Maximum Product Difference Between Two Pairs.
//Memory Usage: 20.3 MB, less than 63.64% of C++ online submissions for Maximum Product Difference Between Two Pairs.


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        return (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
        
    }
};
