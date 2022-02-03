//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Prefix of Word.
//Memory Usage: 6.2 MB, less than 33.48% of C++ online submissions for Reverse Prefix of Word.

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int getIndex = -1;
        
        for(int i = 0; i < word.size(); ++i)
            if(word[i] == ch)
            {
                getIndex = i;
                break;
            }
        
        if(getIndex == -1) return word;
        
        
        for(int i = 0; i < (getIndex + 1)/2; ++i)
        {
            swap(word[i], word[getIndex - i]);
            
        }
        
        return word;
    }
};
