class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < nums.size(); ++j)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int k = j + 1, l = nums.size() - 1;
                while(k < l)
                {   if(k > j + 1 && nums[k] == nums[k - 1]) {++k; continue;}
                    if((long long)(nums[i] + nums[j]) % 1000000007 == target - (nums[k] + nums[l])% 1000000007)
                    {
                        output.push_back({nums[i], nums[j], nums[k], nums[l]});
                        ++k;
                    }
                    else if((long long)(nums[i] + nums[j])% 1000000007 < target - (nums[k] + nums[l])% 1000000007) ++k;
                    else --l;
                }
            }
        }
        return output;
    }
};