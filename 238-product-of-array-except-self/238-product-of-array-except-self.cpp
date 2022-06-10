class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        
        prefix[0] = nums[0];
        suffix[nums.size() - 1] = nums[nums.size() - 1];
        
        for(int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] * nums[i];
        }
        
        for(int i = nums.size() - 2; i > -1; --i)
        {
            suffix[i] = suffix[i + 1] * nums[i];
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            int pre = 1, suff = 1;
            if(i - 1 > -1)
                pre = prefix[i - 1];
            if(i + 1 < nums.size())
                suff = suffix[i + 1];
            
            output.push_back(pre * suff);
        }
        
        return output;
    }
};