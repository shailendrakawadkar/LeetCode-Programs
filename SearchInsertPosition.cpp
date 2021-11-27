class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                index = i;
                break;
            } else if(nums[i] > target)
            {
                if(i == 0)
                {
                    index = 0;
                    break;
                }
                else
                {
                    index = i;
                    break;
                }
            }
        }
        return index;
    }
};
