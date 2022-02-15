//Runtime: 48 ms, faster than 47.79% of C++ online submissions for Squares of a Sorted Array.
//Memory Usage: 26 MB, less than 54.82% of C++ online submissions for Squares of a Sorted Array.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); ++i) nums[i] *= nums[i];
        
        sort(nums.begin(), nums.end());
        return nums;
    }
};
