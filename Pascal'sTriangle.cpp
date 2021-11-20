class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        
        if(numRows == 0) return output;
        
        vector<int> first;
        first.push_back(1);
        
        output.push_back(first);
        
        for(int i = 1; i < numRows; i++)
        {
            vector<int> prevRow = output[i - 1];
            vector<int> nextRow;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                    nextRow.push_back(1);
                else
                {
                    nextRow.push_back(prevRow[j - 1] + prevRow[j]);
                }
            }
            output.push_back(nextRow);
        }
        return output;
    }
};
