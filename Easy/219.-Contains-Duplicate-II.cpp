//Runtime: 377 ms, faster than 9.34% of C++ online submissions for Contains Duplicate II.
//Memory Usage: 97.3 MB, less than 8.60% of C++ online submissions for Contains Duplicate II.

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> um;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um.find(nums[i]) != um.end())
            {
                if(abs(i - (um[nums[i]][um[nums[i]].size() - 1])) <= k){
                    return true;
                };
                um[nums[i]].push_back(i);
            }
            else
            {
                um[nums[i]].push_back(i);
            }
        } 
        return false;
    }
};
