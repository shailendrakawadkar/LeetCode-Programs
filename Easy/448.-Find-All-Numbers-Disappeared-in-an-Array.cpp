//Runtime: 92 ms, faster than 23.23% of C++ online submissions for Find All Numbers Disappeared in an Array.
//Memory Usage: 44.9 MB, less than 11.87% of C++ online submissions for Find All Numbers Disappeared in an Array.

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> output;
        unordered_map<int, int> um;
        
        for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um.find(i + 1) == um.end()) output.push_back(i + 1);
        }
        
        return output;
    }
};
