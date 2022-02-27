class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int prefix_size = pref.size(), ct = 0;
        
        for(int i = 0; i < words.size(); ++i)
            if(words[i].substr(0, prefix_size) == pref) ++ct;
        return ct;
    }
};