class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c) return mat;
        
        vector<vector<int>> output;
        vector<int> temp;
        int l = 0;
        for(int i = 0; i < mat.size(); ++i)
        {
            for(int j = 0; j < mat[i].size(); ++j)
            {
                temp.push_back(mat[i][j]);
                ++l;
                if(l == c)
                {
                    l = 0;
                    output.push_back(temp);
                    temp.clear();
                }
            }
        }
        return output;
    }
};