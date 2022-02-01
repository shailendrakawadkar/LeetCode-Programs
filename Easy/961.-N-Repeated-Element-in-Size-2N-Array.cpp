//Runtime: 48 ms, faster than 58.48% of C++ online submissions for N-Repeated Element in Size 2N Array.
//Memory Usage: 30.2 MB, less than 22.03% of C++ online submissions for N-Repeated Element in Size 2N Array.

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> um;
        
        for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];
        
        for(auto it : um)
            if(it.second == nums.size()/2) return it.first;
        
        return 0;
    }
};
