class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> um;
        
        for(int i = 0; i < strs.size(); ++i)
        {
            vector<int> temp(26, 0);
            for(int j = 0; j < strs[i].size(); ++j)
            {
                temp[strs[i][j] - 'a']++;
            }
            um[temp].push_back(strs[i]);
        }
        vector<vector<string>> output;
        
        for(auto &it : um)
        {
            output.push_back(it.second);
        }
        return output;
    }
};