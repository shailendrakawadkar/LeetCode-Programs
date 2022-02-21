class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> um;
        int n = nums.size();
        int output;
        for(int i = 0; i < n; ++i)
        {
            if(um[nums[i]] == n/2) {
                output = nums[i];
                break;
            }
            ++um[nums[i]];
        }
        
        return output;
    }
};