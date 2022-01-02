class Solution {
public:
    bool isPalindrome(string word)
    {   
        int mid = word.length()/2;
        for(int i = 0; i < mid; i++)
        {
            if(word[i] != word[word.length() - 1 - i]) return false;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for(string word : words)
        {
            if(isPalindrome(word))
            {
                return word;
            }
        }
        return "";
    }
};
