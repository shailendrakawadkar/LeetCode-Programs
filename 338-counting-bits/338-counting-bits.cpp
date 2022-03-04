class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        
        for(int i = 0; i <= n; ++i)
        {
            int ct = 0, val = i;
            while(val)
            {
                val = val & (val - 1);
                ++ct;
            }
            output.push_back(ct);
        }
        return output;
    }
};