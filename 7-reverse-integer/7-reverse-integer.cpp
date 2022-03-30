class Solution {
public:
    int reverse(int x) {
        int i = 0; long ans = 0;
        while(x != 0)
        {
            int rem = x % 10;
            x /= 10;
            ans = ans * 10 + rem;
            ++i;
        }
        if(ans > INT_MAX || ans < INT_MIN)
            return 0;
        return ans;
    }
};