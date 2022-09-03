class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<int> output(r * c);
        
        int direction = 0, cycle = 0;
        
        int j = 0, k = 0;
        
        for(int i = 0; i < (r * c); ++i)
        {
            if(direction == 0)
            {
                output[i] = matrix[j][k];
                ++k;
                if(k >= c - cycle) {
                    --k;
                    direction++;
                }
                continue;
            }
            
            if(direction == 1)
            {
                ++j;
                output[i] = matrix[j][k];
                
                if(j == r - 1 - cycle) {
                    --k;
                    direction++;
                }
                continue;
            }
            
            if(direction == 2)
            {
                output[i] = matrix[j][k];
                --k;
                if(k == -1 + cycle) {
                    ++k;
                    --j;
                    direction++;
                }
                continue;
            }
            
            if(direction == 3)
            {
                output[i] = matrix[j][k];
                --j;
                if(j == cycle) {
                    ++j;
                    ++k;
                    direction = 0;
                    cycle++;
                }
                continue;
            }
        }
        return output;
    }
};