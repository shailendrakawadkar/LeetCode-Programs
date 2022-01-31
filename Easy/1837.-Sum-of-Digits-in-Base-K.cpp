//Runtime: 2 ms, faster than 23.74% of C++ online submissions for Sum of Digits in Base K.
//Memory Usage: 5.8 MB, less than 72.84% of C++ online submissions for Sum of Digits in Base K

class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        
        while(n >= k)
        {
            sum += n % k;
            n = n/k;
        }
        
        return sum + n;
    }
};
