//BRUTE FORCE APPROACH

//Runtime: 16 ms, faster than 74.27% of C++ online submissions for Count Number of Pairs With Absolute Difference K.
//Memory Usage: 12.5 MB, less than 38.89% of C++ online submissions for Count Number of Pairs With Absolute Difference K.

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        
        for(int i = 0; i , nums.size(); ++i)
            for(int j = i + 1; j < nums.size(); ++j)
                if(abs(nums[i] - nums[j]) == k) ++count;
        
        return count;
    }
};
