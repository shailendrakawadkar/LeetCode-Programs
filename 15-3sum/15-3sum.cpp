class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            int j = i + 1, k = nums.size() - 1; 
            
            while(j < k)
            {
                if( j > i + 1 && nums[j] == nums[j - 1]) {++j; continue;}
                
                if(nums[j] + nums[k] + nums[i] == 0)
                {
                    output.push_back({nums[i], nums[j], nums[k]});
                    ++j;
                }else if(nums[j] + nums[k] + nums[i] > 0) --k;
                else ++j;
            }
        } 
        return output;
    }
};