//Runtime: 7 ms, faster than 79.06% of C++ online submissions for Shuffle String.
//Memory Usage: 15.3 MB, less than 41.54% of C++ online submissions for Shuffle String.

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string output = s;
        
        for(int i = 0; i < indices.size(); ++i)
        {
            output[indices[i]] = s[i];
        }
        return output;
    }
};
