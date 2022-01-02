class Solution {
public:
    bool isPalindrome(string s) {
     string output = "";
        for(int i = 0; i < s.length(); i++)
        {
            int value = (int)s[i];
            if((value > 64 && value < 91) || (value > 96 && value < 123) || (value > 47 && value < 58))
            {
                if(value > 64 && value < 91)
                {
                    output += (char)(value + 32);
                }
                else
                {
                    output += s[i];
                }
            }
        }
        
        int outputLength = output.length();
        int mid = outputLength/2;
        for(int i = 0; i < mid; i++)
        {
            if(output[i] != output[outputLength - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};
