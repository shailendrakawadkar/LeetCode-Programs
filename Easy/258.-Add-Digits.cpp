//Runtime: 8 ms, faster than 8.74% of C++ online submissions for Add Digits.
//Memory Usage: 5.8 MB, less than 75.31% of C++ online submissions for Add Digits.

class Solution {
public:
    int addDigits(int num) {
        string str = to_string(num);
        
        while(str.size() != 1)
        {   int newNum = 0;
            for(int i = 0; i < str.size(); ++i)
            {
                newNum += str[i] - '0';
            }
         str = to_string(newNum);
        }
        
        return str[0] - '0';
    }
};
