//Runtime: 11 ms, faster than 74.41% of C++ online submissions for Keep Multiplying Found Values by Two.
//Memory Usage: 10.4 MB, less than 91.27% of C++ online submissions for Keep Multiplying Found Values by Two.

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == original)
            {
                original *= 2;
                i = -1;
            }
        }
        
        return original;
    }
};
