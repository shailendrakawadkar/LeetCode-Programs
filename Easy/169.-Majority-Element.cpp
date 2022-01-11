//Runtime: 25 ms, faster than 27.71% of C++ online submissions for Majority Element.
//Memory Usage: 19.6 MB, less than 50.40% of C++ online submissions for Majority Element.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> um;
        int n = nums.size();
        int output;
        for(int i = 0; i < n; ++i)
        {
            ++um[nums[i]];
        }
        for(auto it : um)
        {
            if(it.second > n/2)
            {
                output = it.first;
            }
        }
        return output;
    }
};
