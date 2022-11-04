class Solution {
public:
    
    bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
            return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int l = 0, h = s.size() - 1;
        while(l < h)
        {
            if(isVowel(s[l]) && isVowel(s[h]))
            {
                swap(s[l], s[h]);
                ++l; --h;
            }
            else if(isVowel(s[l])) --h;
            else ++l;
        }
        return s;
    }
};