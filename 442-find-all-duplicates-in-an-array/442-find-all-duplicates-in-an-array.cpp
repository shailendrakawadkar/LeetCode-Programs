class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> output;
        unordered_map<int, int> um;
        for(auto it : nums) ++um[it];
        for(auto it : um)
            if(it.second == 2) output.push_back(it.first);
        return output;
    }
};