//Runtime: 42 ms, faster than 32.83% of C++ online submissions for Move Zeroes.
//Memory Usage: 19.1 MB, less than 83.59% of C++ online submissions for Move Zeroes.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0, j = i + 1; i < nums.size() && j < nums.size(); ++j)
        {
            if(nums[i] == 0 && nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                ++i;
            }
            if(nums[i] != 0) ++i;
        }
    }
};
