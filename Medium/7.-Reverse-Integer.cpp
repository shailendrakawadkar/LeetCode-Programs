//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
//Memory Usage: 6.2 MB, less than 6.09% of C++ online submissions for Reverse Integer.

class Solution {
public:
    int reverse(int x) {
        int is_positive = (x > 0) ? 1 : -1;
        x = abs(x);
        long int reverse = 0;
        string str = to_string(x);
        int intlen = str.length();
        
        while(x != 0)
        {
            int val = x % 10;
            reverse = reverse + (val * pow(10, --intlen));
            x = x/10;
        }
        
        if(is_positive * reverse > pow(-2, 31) && is_positive * reverse < pow(2, 31) - 1) return is_positive * reverse;
        
        return 0;
    }
};
