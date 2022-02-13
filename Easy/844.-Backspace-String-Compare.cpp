//=================USING STACK ======================//

//Runtime: 5 ms, faster than 17.77% of C++ online submissions for Backspace String Compare.
//Memory Usage: 6.5 MB, less than 24.21% of C++ online submissions for Backspace String Compare.

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '#' && !s1.empty()) s1.pop();
            if(s[i] != '#') s1.push(s[i]);
        }
        for(int i = 0; i < t.size(); ++i)
        {
            if(t[i] == '#' && !s2.empty()) s2.pop();
            if(t[i] != '#') s2.push(t[i]);
        }
        
        if(s1.size() != s2.size()) return false;
        while(s1.size())
        {
            
            cout << s1.top() << s2.top();
            if(s1.top() != s2.top()) return false;
            s1.pop(); s2.pop();
        }
        
        return true;
    }
};
