class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int num = 0, index;
        unordered_map<int, int> um;
        
        for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um[i + 1] < 1) return (i + 1);
        }
        return nums.size() + 1;
    }
};