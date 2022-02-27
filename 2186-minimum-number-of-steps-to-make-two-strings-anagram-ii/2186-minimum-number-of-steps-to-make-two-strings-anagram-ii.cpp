class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> ums, umt;
        string str = s + t;
        int ct = 0;
        for(auto it : s) ++ums[it];
        for(auto it : t) ++umt[it];
        
        for(auto it : ums){ 
            if(it.second > umt[it.first])
                ct += (it.second - umt[it.first]);
        }
        
        for(auto it : umt){ 
            if(it.second > ums[it.first])
                ct += (it.second - ums[it.first]);
        }
        return ct;
    }
};