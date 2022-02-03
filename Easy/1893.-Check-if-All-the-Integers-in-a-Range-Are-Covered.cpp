//======================BRUTE FORCE================//

//Runtime: 3 ms, faster than 86.60% of C++ online submissions for Check if All the Integers in a Range Are Covered.
//Memory Usage: 8.7 MB, less than 87.13% of C++ online submissions for Check if All the Integers in a Range Are Covered.

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i = left; i <= right; ++i)
        {
            int flag = 0;
            
            for(int j = 0; j < ranges.size(); ++j)
            {
                if(i >= ranges[j][0] && i <= ranges[j][1])
                {
                    flag = 1;
                    break;
                }
            }
            if(!flag) return false;
        }
        
        return true;
    }
};
