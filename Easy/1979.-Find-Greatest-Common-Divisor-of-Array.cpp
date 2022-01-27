//Runtime: 8 ms, faster than 58.94% of C++ online submissions for Find Greatest Common Divisor of Array.
//Memory Usage: 12.5 MB, less than 62.77% of C++ online submissions for Find Greatest Common Divisor of Array.

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minElement = INT_MAX, maxElement = INT_MIN;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            minElement = min(minElement, nums[i]);
            maxElement = max(maxElement, nums[i]);
        }
        
        return gcd(minElement, maxElement);
    }
};
