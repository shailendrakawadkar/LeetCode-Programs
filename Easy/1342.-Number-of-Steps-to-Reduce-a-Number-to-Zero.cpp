//Runtime: 2 ms, faster than 23.26% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
//Memory Usage: 5.8 MB, less than 75.03% of C++ online submissions for Number of Steps to Reduce a Number to Zero.

class Solution {
public:
    int numberOfSteps(int num) {
        int ct = 0;
        
        while(num != 0)
        {
            if(num % 2 == 0) num /= 2;
            else num -= 1;
            
            ++ct;
        }
        return ct;
    }
};
