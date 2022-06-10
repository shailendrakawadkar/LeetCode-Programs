class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buyAt = prices[0];
        
        for(int i = 1; i < prices.size(); ++i)
        {
            if(prices[i] - buyAt > profit)
            {
                profit = prices[i] - buyAt;
            }
            else if(prices[i] < buyAt) buyAt = prices[i];
        }
        return profit;
    }
};