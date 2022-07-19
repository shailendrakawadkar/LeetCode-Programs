class Solution {
public:
    bool solve(vector<vector<int>>& matrix, int target, int i)
    {
        int s = 0, e = matrix[i].size() - 1, mid = s + (e - s) / 2;
        
        while(s <= e)
        {
            if(matrix[i][mid] == target) return true;
            else if(matrix[i][mid] < target) s = mid + 1;
            else e = mid -1;
            
            mid = s + (e - s) / 2;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); ++i)
        {
            if(solve(matrix, target, i)) return true;
        }
        return false;
    }
};