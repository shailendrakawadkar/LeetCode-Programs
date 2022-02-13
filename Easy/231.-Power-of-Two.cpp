//Runtime: 4 ms, faster than 35.20% of C++ online submissions for Power of Two.
//Memory Usage: 6 MB, less than 23.73% of C++ online submissions for Power of Two.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ones = 0;
                    
        while(n != 0)
        {
            if(n % 2 == 1) ++ones;
            n /= 2;
        }
        if(ones == 1) return true;
        return false;
    }
};
