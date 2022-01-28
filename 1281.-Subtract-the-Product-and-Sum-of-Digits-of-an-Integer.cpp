//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
//Memory Usage: 5.9 MB, less than 23.24% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        
        while(n != 0)
        {
            product *= (n % 10);
            sum += (n % 10);
            n /= 10;
        }
        
        return product - sum;
    }
};
