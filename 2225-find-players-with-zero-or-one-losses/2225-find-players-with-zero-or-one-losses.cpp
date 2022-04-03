class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, pair<int, int>> um;
        vector<vector<int>> output;
        for(int i = 0; i < matches.size(); ++i)
        {
            ++um[matches[i][0]].first;                
            ++um[matches[i][1]].second;
        }
        vector<int> zeros_count, ones_count;
        for(auto it : um)
        {
            if(it.second.second == 0) zeros_count.push_back(it.first);
        }
        for(auto it : um)
        {
            if(it.second.second == 1) ones_count.push_back(it.first);
        }
        sort(zeros_count.begin(), zeros_count.end());
        sort(ones_count.begin(), ones_count.end());
        output.push_back(zeros_count);
        output.push_back(ones_count);
        return output;
    }
};