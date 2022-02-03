//Runtime: 41 ms, faster than 29.91% of C++ online submissions for Find Pivot Index.
//Memory Usage: 31.6 MB, less than 16.58% of C++ online submissions for Find Pivot Index.

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> preSumOne = nums;
        
        int size = nums.size();
        
        for(int i = 1; i < size; ++i)
        {
            preSumOne[i] += preSumOne[i - 1];
            nums[size - 1 - i] += nums[size - 1 - (i - 1)];
        }
        
        for(int i = 0; i < size; ++i)
        {
            if(preSumOne[i] == nums[i]) 
            {
                return i;
            }
        }
        
        return -1;
    }
};
