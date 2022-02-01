//====================BRUTE FORCE APPROACH====================//

//Runtime: 28 ms, faster than 18.59% of C++ online submissions for Maximum Difference Between Increasing Elements.
//Memory Usage: 8.2 MB, less than 98.86% of C++ online submissions for Maximum Difference Between Increasing Elements.

class Solution {
public:
    int maximumDifference(vector<int>& prices) {
       int maxDIff = -1;
        for(int i = 0; i < prices.size(); ++i)
        {
           for(int j = i + 1; j < prices.size(); ++j)
           {
               if(prices[j] > prices[i] &&(prices[j] - prices[i]) > maxDIff) maxDIff = prices[j] - prices[i];
           }
        }
        
        return maxDIff;
    }
};
