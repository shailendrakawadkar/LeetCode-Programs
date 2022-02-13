//Runtime: 3 ms, faster than 70.39% of C++ online submissions for Make The String Great.
//Memory Usage: 6.9 MB, less than 21.01% of C++ online submissions for Make The String Great.

class Solution {
public:
    string makeGood(string s) {
        for(int i = 1; i < s.size(); ++i)
        {
            if(abs(s[i] - s[i - 1]) == 32)
            {
                s = s.substr(0, i - 1) + s.substr(i + 1, s.size());
                i = 0;
            }
        }
        return s;
    }
};
