//============ RECURSIVE APPROACH =================//

class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        
        return tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
    }
};
