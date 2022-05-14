class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0, e = 0;
        
        while(e < nums.size())
        {
            if(nums[e])
            {
                swap(nums[s++], nums[e++]);
            }
            else ++e;
                
        }
    }
};