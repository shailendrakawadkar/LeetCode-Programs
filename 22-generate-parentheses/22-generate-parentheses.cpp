class Solution {
public:
    void solve(string &s, int open, int close, vector<string> &output)
    {
        if(open == 0 && close == 0) {
            output.push_back(s);
            return;
        }
        
        if(open && close)
        {
            s.push_back('(');
            solve(s, open - 1, close, output);
            s.pop_back();
        }
        
        if(open < close)
        {
            s.push_back(')');
            solve(s, open, close - 1, output);
            s.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        string s = "";
        solve(s, n, n, output);
        return output;
    }
};