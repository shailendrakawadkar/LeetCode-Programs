//Runtime: 7 ms, faster than 24.08% of C++ online submissions for Find the Difference.
//Memory Usage: 6.9 MB, less than 9.15% of C++ online submissions for Find the Difference.

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        s += t;
        if(s.size() == 1) return s[0];
        
        char ch = s[0];
        for(int i = 1; i < s.size(); ++i)
        {
            ch ^= s[i];
        }
        return (char)ch;
    }
};
