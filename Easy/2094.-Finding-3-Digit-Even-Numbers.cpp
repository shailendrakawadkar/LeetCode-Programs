class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> output;
        
        for(int i = 0; i < digits.size(); ++i)
        {
            for(int j = 0; j < digits.size(); ++j){
                
                if(i == j) continue;
                
                for(int k = 0; k < digits.size(); ++k)
                {
                    if(k == j || k == i) continue;
                    int digit = digits[i] * 100 + digits[j] * 10 + digits[k];
                    
                    if(digit > 99 && digit % 2 == 0 && find(output.begin(), output.end(), digit) == output.end())
                        output.push_back(digit);
                }
            }
        }
        sort(output.begin(), output.end());
        return output;
    }
};
