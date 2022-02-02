//Runtime: 23 ms, faster than 11.80% of C++ online submissions for Fibonacci Number.
//Memory Usage: 5.9 MB, less than 39.41% of C++ online submissions for Fibonacci Number.

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
};
