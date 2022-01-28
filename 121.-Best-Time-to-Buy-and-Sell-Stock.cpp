// BRUTE FORCH APPROACH

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        for(int i = 0; i < prices.size(); ++i) 
            for(int j = i + 1; j < prices.size(); ++j)
                if(prices[j] - prices[i] > profit) profit = prices[j] - prices[i];
        
        return profit;
    }
};


// OPTIMAL SOLUTION
//Runtime: 108 ms, faster than 91.62% of C++ online submissions for Best Time to Buy and Sell Stock.
//Memory Usage: 93.3 MB, less than 53.15% of C++ online submissions for Best Time to Buy and Sell Stock.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_element = INT_MAX;
        
        for(int i = 0; i < prices.size(); ++i) {
            if(prices[i] < min_element) min_element = prices[i];
            
            if(prices[i] - min_element > profit) profit = prices[i] - min_element;
        }
           
        return profit;
    }
};

