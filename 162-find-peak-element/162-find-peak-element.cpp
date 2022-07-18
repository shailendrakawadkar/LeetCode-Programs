class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, mid = s + (e - s) / 2;
        
        while(s < e)
        {
            if(mid == s){
                if(nums[mid] > nums[mid + 1]) break;
                else {
                    mid = mid + 1;
                    break;
                }
            }else if(mid == e)
            {
                
                if(nums[mid] > nums[mid - 1]) break;
                else {
                    mid = mid - 1;
                    break;
                }
            }else if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) break;
            else if(nums[mid - 1] > nums[mid]) e = mid;
            else if(nums[mid + 1] > nums[mid]) s = mid + 1;
            mid = s + (e - s) / 2;
        }
        return mid;
    }
};