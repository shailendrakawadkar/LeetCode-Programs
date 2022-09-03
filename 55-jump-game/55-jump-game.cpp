class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i > reach) return false;
            if(nums[i] + i > reach)
            {
                reach = i + nums[i];
            }
            if(reach >= nums.size() - 1) return true;
        }
        return false;
    }
};