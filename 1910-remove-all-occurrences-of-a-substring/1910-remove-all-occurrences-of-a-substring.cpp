class Solution {
public:
    string removeOccurrences(string s, string part) {
        int ps = part.size();
        for(int i = 0; i < s.size(); ++i)
        {
            if(s.substr(i, ps) == part)
            {
                s = s.substr(0, i) + s.substr(i + ps);
                i = -1;
            }
        }
        return s;
    }
};