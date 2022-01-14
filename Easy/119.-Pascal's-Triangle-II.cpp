//BRUTE FORCE

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        unordered_map<int, vector<int>> um;
        um[1] = {1};        
        um[2] = {1, 1};

        
        for(int i = 3; i <= rowIndex + 1; ++i)
        {
            um[i] = {1};
            
            for(int j = 1; j < um[i - 1].size(); ++j)
            {
                um[i].push_back(um[i - 1][j] + um[i - 1][j - 1]);
            }
            
            um[i].push_back(1);
        }
        
        return um[rowIndex + 1];
    }
};
