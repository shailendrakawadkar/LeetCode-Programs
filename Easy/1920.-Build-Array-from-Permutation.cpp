//---------------BRUTE FORCE-------------//

//Runtime: 39 ms, faster than 5.54% of C++ online submissions for Build Array from Permutation.
//Memory Usage: 16.7 MB, less than 35.77% of C++ online submissions for Build Array from Permutation.

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> output;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            output.push_back(nums[nums[i]]);
        }
        return output;
    }
};
