class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        int output;
        
        for(int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        
        for(auto um : map)
        {
            if(um.second == 1)
            {
                output = um.first;
                break;
            }
        }
        return output;
    }
};
