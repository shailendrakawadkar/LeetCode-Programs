class Solution {
public:
    bool static customSort(pair<int, int> &a, pair<int, int> &b)
    {
        return a.first < b.first;
    }
    
    vector<int> partitionLabels(string s) {
        
        map<char, pair<int, int>> positions;
        
        vector<int> output;
        vector<pair<int, int>> temp;
        
        for(int i = 0; i < s.size(); ++i)
        {
            if(positions.find(s[i]) == positions.end())
            {
                positions[s[i]] = {i, i};
            }
            else
                positions[s[i]].second = i;
        }
        
        
        for(auto &it : positions)
        {
            temp.push_back(it.second);
        }
        
        sort(temp.begin(), temp.end(), customSort);
        
        for(int i = 1; i < temp.size(); ++i)
        {
             if(temp[i].first <= temp[i - 1].second)
             {
                 temp[i - 1].second = max(temp[i - 1].second, temp[i].second);
                 temp.erase(temp.begin() + i);
                 i--;
             }
        }
        
        for(int i = 0; i < temp.size(); ++i)
        {
            output.push_back(temp[i].second - temp[i].first + 1);
        }
        
        return output;
    }
};