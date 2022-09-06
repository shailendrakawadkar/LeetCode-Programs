class Solution {
public:
    int solve(string s, int index, vector<int> &dp)
    {
        if(s[index] == '0') return 0;
        if(index >= s.size() - 1) return 1;
        
        if(dp[index] != -1) return dp[index];
        
        //single char
        int singleChar = solve(s, index + 1, dp);
        
        //double char
        int doubleChar = 0;
        string str = "";
        str += s[index]; str += s[index + 1];
        
        if(stoi(str) > 0 && stoi(str) < 27) {
            doubleChar = solve(s, index + 2, dp);
        }
        
        return dp[index] = singleChar + doubleChar;
    }
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return solve(s, 0, dp);   
    }
};