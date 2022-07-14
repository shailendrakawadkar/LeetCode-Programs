class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<pair<int, int>> indexes;
        indexes.push_back({0, 0});
        vector<vector<int>> visited = nums;
        vector<int> output = {nums[0][0]};
        
        int index = 0;
        
        while(index < indexes.size())
        {
            int row = indexes[index].first, col = indexes[index].second;
            
            if((row + 1) < nums.size() && col < nums[row + 1].size() && visited[row + 1][col] != 0)
            {
                output.push_back(nums[row + 1][col]);
                indexes.push_back({row + 1, col});
                visited[row + 1][col] = 0;
            }
            
            if((row) < nums.size() && (col + 1) < nums[row].size() && visited[row][col + 1] != 0)
            {
                output.push_back(nums[row][col + 1]);
                indexes.push_back({row, col + 1});
                visited[row][col + 1] = 0;
            }
            
            ++index;
        }
        
        return output;
    }
};