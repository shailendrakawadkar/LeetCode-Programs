class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
     string ws = "";
        for(int i = 0; i < words.size(); i++)
        {
            ws += words[i];
            if(s == ws) return true;
        }
        return false;
    }
};
