class Solution {
public:
    void insert_char(vector<char>& output, char ch, int ct)
    {
        output.push_back(ch);
        if(ct > 1)
        {
            string str = to_string(ct);
            for(int j = 0; j < str.size(); ++j) output.push_back(str[j]);
        }
    }
    int compress(vector<char>& chars) {
        vector<char> output;
        int ct = 1;
        for(int i = 1; i < chars.size() + 1; ++i)
        {
            if(i == chars.size())
            {
                insert_char(output, chars.back(), ct);                
            }
            else
            {
            if(chars[i] != chars[i - 1])
            {
                insert_char(output, chars[i - 1], ct);
                ct = 1;
            }
            else ++ct;
                 
            }
        }
        
        chars.clear();
        chars = output;
        return chars.size();
    }
};