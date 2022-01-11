//Runtime: 29 ms, faster than 5.24% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
//Memory Usage: 14.8 MB, less than 5.83% of C++ online submissions for Find First and Last Position of Element in Sorted Array.

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> um;
        vector<int> output;
        for(int i = 0; i < nums.size(); ++i)
        {
            um[nums[i]].push_back(i);
        }
        
        if(um.find(target) != um.end())
        {
         output.push_back(um[target][0]);
        output.push_back(um[target][um[target].size() - 1]);   
        }
        else
        {
            output.push_back(-1);
        output.push_back(-1);
        }
        
        return output;
    }
};
