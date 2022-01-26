// BRUTE FORCE APPROACH

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for(int i = 0; i < nums.size(); ++i)
        {
            int temp = nums[i];
            nums.erase(nums.begin() + i);
            bool is = true;
            for(int j = 1; j < nums.size(); ++j)
            {
                if(nums[j] - nums[j - 1] < 1) {
                    is = false;
                }
            }
            
            if(is) return true;
            is = true;
            nums.insert(nums.begin() + i, temp);
        }
        return false;
    }
};
