class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int, int> row, col;
        
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[i].size(); ++j)
            {
                if(!matrix[i][j])
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[i].size(); ++j)
            {
                if(row[i] > 0 || col[j] > 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};