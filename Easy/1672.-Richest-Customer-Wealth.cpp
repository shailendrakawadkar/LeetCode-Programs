//Runtime: 8 ms, faster than 25.22% of C++ online submissions for Richest Customer Wealth.
//Memory Usage: 8.1 MB, less than 7.90% of C++ online submissions for Richest Customer Wealth.

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        
        for(auto v : accounts)
        {
            int sum = accumulate(v.begin(), v.end(), 0);
            maxWealth = max(sum, maxWealth);
        }
        
        return maxWealth;
    }
};
