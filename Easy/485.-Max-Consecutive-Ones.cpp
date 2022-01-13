//Runtime: 49 ms, faster than 29.60% of C++ online submissions for Max Consecutive Ones.
//Memory Usage: 36.3 MB, less than 20.90% of C++ online submissions for Max Consecutive Ones.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne = INT_MIN, temp = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i]) ++temp;
            if(temp > maxOne) maxOne = temp;
            if(!nums[i]) temp = 0;
        }
        return maxOne;
    }
};
