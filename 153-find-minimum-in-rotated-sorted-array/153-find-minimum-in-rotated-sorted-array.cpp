class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, mid;
        
        while(s < e)
        {
            if(nums[s] < nums[e]) return nums[s];
            
            mid = ( s + e ) / 2;
            
            if(nums[mid] >= nums[s])
                s = mid + 1;
            else 
                e = mid;
        }
        return nums[s];
    }
};