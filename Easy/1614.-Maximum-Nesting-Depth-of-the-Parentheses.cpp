//Runtime: 3 ms, faster than 33.83% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
//Memory Usage: 6.4 MB, less than 20.82% of C++ online submissions for Maximum Nesting Depth of the Parentheses.

class Solution {
public:
    int maxDepth(string s) { 
        stack<int> st;
        int maxDepth = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(') {
                st.push(s[i]);
                int tempMaxDepth = st.size();
                if(maxDepth < tempMaxDepth)
                    maxDepth = tempMaxDepth;
            } 
            else if(s[i] == ')')
            {
                st.pop();
            }
        }
        return maxDepth;
    }
};
