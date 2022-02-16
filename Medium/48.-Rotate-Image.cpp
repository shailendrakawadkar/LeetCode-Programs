//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate Image.
//Memory Usage: 7.2 MB, less than 33.89% of C++ online submissions for Rotate Image.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        stack<int> st;
        
        for(int i = matrix.size() - 1; i > -1; --i)
        {
            for(int j = 0; j < matrix.size(); ++j)
            {
                st.push(matrix[j][i]);
            }
        }
        
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix.size(); ++j)
            {
                matrix[i][j] = st.top();
                st.pop();
            }
        }
    }
};
