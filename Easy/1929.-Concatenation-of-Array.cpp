//Runtime: 16 ms, faster than 18.99% of C++ online submissions for Concatenation of Array.
//Memory Usage: 12.9 MB, less than 17.69% of C++ online submissions for Concatenation of Array.

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i < size; ++i)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
