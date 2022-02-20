class Solution {
public:
    int countEven(int num) {
        int ct = 0;
        for(int i = 2; i <= num; ++i)
        {
            string val = to_string(i);
            
            int digitSum = 0;
            
            for(int j = 0; j <val.size(); ++j) digitSum += (val[j]- '0');
            
            if(!(digitSum % 2)) ++ct;
        }
        return ct;
    }
};