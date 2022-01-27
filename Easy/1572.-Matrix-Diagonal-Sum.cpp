//Runtime: 12 ms, faster than 92.63% of C++ online submissions for Matrix Diagonal Sum.
//Memory Usage: 11.4 MB, less than 10.64% of C++ online submissions for Matrix Diagonal Sum.

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        
        for(int i = 0; i < mat.size(); ++i)
        {
            sum += mat[i][i];
            sum += mat[i][mat.size() - 1 - i];
        }
        
        if(mat.size() % 2 != 0) sum -= mat[mat.size()/2][mat.size()/2];
        
        return sum;
    }
};
