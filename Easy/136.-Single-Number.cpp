//Runtime: 70 ms, faster than 5.14% of C++ online submissions for Single Number.
//Memory Usage: 20.2 MB, less than 11.32% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;
        int output;
        for(int i = 0; i < nums.size(); ++i)
        {
            ++um[nums[i]];
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um[nums[i]] == 1) { output = nums[i]; break; }
        }
        
        return output;
    }
};
