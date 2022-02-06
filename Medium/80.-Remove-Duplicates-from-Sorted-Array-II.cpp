//Runtime: 15 ms, faster than 12.45% of C++ online submissions for Remove Duplicates from Sorted Array II.
//Memory Usage: 11.5 MB, less than 7.62% of C++ online submissions for Remove Duplicates from Sorted Array II.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> um;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um[nums[i]] == 2)
            {
                nums.erase(nums.begin() + i);
                --i;
            }
            else
            {
                ++um[nums[i]];
            }
        }
        return nums.size();
    }
};
