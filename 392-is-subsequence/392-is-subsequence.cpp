class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        
        for(i = 0; i < t.size(); ++i)
        {
            if(t[i] == s[j]) ++j;
        }
        return j == s.size();
    }
};