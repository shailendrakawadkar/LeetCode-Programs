class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        
        while(n)
        {
            int val = n % 10;
            n = n / 10;
            product *= val;
            sum += val;
        }
        
        return product - sum;
    }
};