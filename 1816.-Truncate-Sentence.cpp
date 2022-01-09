class Solution {
public:
    string truncateSentence(string s, int k) {
       string output = "";
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == ' ') {
                --k;
                if(!k)
                {
                    return output;
                }
            }
            output += s[i];
        }
        return output;
    }
};
