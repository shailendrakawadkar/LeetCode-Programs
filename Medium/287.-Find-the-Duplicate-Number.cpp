// Brute Force Approach

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i + 1; j < nums.size(); ++j)
            {
                if(nums[i] == nums[j]) return nums[i];
            }
        }
        return 0;
    }
};

//******Better solution********//

//Runtime: 365 ms, faster than 5.01% of C++ online submissions for Find the Duplicate Number.
//Memory Usage: 83.9 MB, less than 14.60% of C++ online submissions for Find the Duplicate Number.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um.find(nums[i]) != um.end()) return nums[i];
            else ++um[nums[i]];
        }
        return 0;
    }
};
