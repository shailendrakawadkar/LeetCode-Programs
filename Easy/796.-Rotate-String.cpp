//Runtime: 3 ms, faster than 37.40% of C++ online submissions for Rotate String.
//Memory Usage: 6.9 MB, less than 12.35% of C++ online submissions for Rotate String.

class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); ++i)
        {
            if(s.substr(i, s.size()) + s.substr(0, i) == goal) return true;
        }
        
        return false;
    }
};
