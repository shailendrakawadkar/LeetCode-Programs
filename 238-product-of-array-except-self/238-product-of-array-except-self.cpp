class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0, product = 1;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0) zeros++;
            else
            {
                product *= nums[i];
            }
        }
        
        if(zeros > 1)
        {
            vector<int> zoutput(nums.size(), 0);
            return zoutput;
        }
        if(zeros == 1)
        {
            for(int i = 0; i < nums.size(); ++i)
            {
                if(nums[i] == 0)
                {
                    nums[i] = product;
                }
                else
                    nums[i] = 0;
            }
            return nums;
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            nums[i] = product / nums[i];
        }
        return nums;
    }
};