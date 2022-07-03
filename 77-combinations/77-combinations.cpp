class Solution {
public:
    void solve(int index, int k, int n, vector<int> &temp, vector<vector<int>> &output)
    {
        if(temp.size() == k)
        {
            output.push_back(temp);
            return;
        }
        
        if(index > n) return;
        
        //pick
        temp.push_back(index);
        solve(index + 1, k, n, temp, output);
        
        // non pick
        temp.pop_back();
        solve(index + 1, k, n, temp, output);
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> output;
        solve(1, k, n, temp, output);
        return output;
    }
};