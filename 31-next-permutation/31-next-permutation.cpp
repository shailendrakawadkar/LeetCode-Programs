class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i = nums.size() - 2; i > -1; --i)
        {
            if(nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        
        if(index != -1)
            for(int i = nums.size() - 1; i > -1; --i)
            {
                if(nums[i] > nums[index])
                {
                    swap(nums[i], nums[index]);
                    break;
                }
            }
        
        reverse(nums.begin() + index + 1, nums.end());
        
    }
};