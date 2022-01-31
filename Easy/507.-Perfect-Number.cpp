//Runtime: 1588 ms, faster than 10.81% of C++ online submissions for Perfect Number.
//Memory Usage: 5.9 MB, less than 69.29% of C++ online submissions for Perfect Number.

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        
        for(int i = 1; i <= num/2; ++i)
            if(!(num % i)) sum += i;
        
        if(num == sum) return true;
        return false;
    }
};
