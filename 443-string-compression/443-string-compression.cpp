class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> output;
        int ct = 1;
        for(int i = 1; i < chars.size(); ++i)
        {
            if(chars[i] != chars[i - 1])
            {
                output.push_back(chars[i - 1]);
                if(ct > 1)
                {
                    string str = to_string(ct);
                    for(int j = 0; j < str.size(); ++j) output.push_back(str[j]);
                    ct = 1;
                }
            }
            else ++ct;
        }
        
        output.push_back(chars.back());
        if(ct > 1)
        {
             string str = to_string(ct);
                    for(int j = 0; j < str.size(); ++j) output.push_back(str[j]);
                    ct = 1;
                }
        
        chars.clear();
        chars = output;
        return chars.size();
    }
};