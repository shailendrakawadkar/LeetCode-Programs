//Runtime: 8 ms, faster than 41.47% of C++ online submissions for Find the Middle Index in Array.
//Memory Usage: 12.5 MB, less than 32.45% of C++ online submissions for Find the Middle Index in Array.

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
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
