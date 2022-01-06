class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1]++;
        if(digits.size() == 1 && digits[digits.size() - 1] > 9)
        {
            digits.insert(digits.begin(), digits[digits.size() - 1]/10);
            digits[1] = digits[digits.size() - 1]%10;
        }else
        for(int i = digits.size() - 1; i > 0; i--)
        {
            if(digits[i] > 9)
            {
                digits[i - 1] += digits[i]/10;
                digits[i] = digits[i]%10;
                if(i - 1 == 0 && digits[i-1] > 9)
                {
                    int value = digits[i - 1];
                    digits.insert(digits.begin(), value/10);
                    digits[1] = value%10;
                    break;
                }
            }
        }
        return digits;
    }
};
