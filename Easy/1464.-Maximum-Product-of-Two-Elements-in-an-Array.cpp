//Runtime: 8 ms, faster than 54.55% of C++ online submissions for Maximum Product of Two Elements in an Array.
//Memory Usage: 10 MB, less than 64.24% of C++ online submissions for Maximum Product of Two Elements in an Array.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int greater = 0, second_greater = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] >= greater) {
                second_greater = greater;
                greater = nums[i];
            } else if(nums[i] > second_greater)
            {
                second_greater = nums[i];
            }
        }
        return (greater - 1) * (second_greater - 1);
    }
};
