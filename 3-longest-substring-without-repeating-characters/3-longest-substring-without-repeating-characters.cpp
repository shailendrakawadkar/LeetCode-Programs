class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = INT_MIN;
        
        unordered_map<char, int> um;
        
        int i = 0, j = 0;
        
        for(i  = 0; i < s.size();)
        {
            if(um[s[i]] == 1)
            {
                ans = max(ans, i - j);
                --um[s[j]];
                ++j;
            }
            else
            {
                ++um[s[i]];
                ++i;
            }
        }
        
        ans = max(ans, i - j);
        
        return ans == INT_MIN ? i : ans;
    }
};