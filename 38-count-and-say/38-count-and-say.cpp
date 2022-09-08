class Solution {
public:
    string solve(string s, int n)
    {
        if(n == 0) return s;
        int ct = 1;
        string str = "";
        
        for(int i = 1; i < s.size(); ++i)
        {
            if(s[i] == s[i - 1]) ++ct;
            else {
                str += (to_string(ct) + s[i - 1]);
                ct = 1;
            }
        }
        
        str += (to_string(ct) + s[s.size() - 1]);
        
        return solve(str, n - 1);
    }
    string countAndSay(int n) {
        return solve("1", n - 1);
    }
};