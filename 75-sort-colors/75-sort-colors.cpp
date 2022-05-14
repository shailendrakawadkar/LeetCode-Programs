class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, mid = 0, h = nums.size() - 1;
        
        while(mid <= h)
        {
            switch(nums[mid])
            {
                case 0 : swap(nums[l++], nums[mid++]);
                         break;
                case 1 : ++mid;
                         break;
                case 2 : swap(nums[h--], nums[mid]);
            }
        }
    }
};