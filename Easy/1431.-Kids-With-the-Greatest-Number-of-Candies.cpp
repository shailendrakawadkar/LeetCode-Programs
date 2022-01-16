//Runtime: 9 ms, faster than 8.61% of C++ online submissions for Kids With the Greatest Number of Candies.
//Memory Usage: 9 MB, less than 10.86% of C++ online submissions for Kids With the Greatest Number of Candies.

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> output;
        int maxCandie = *max_element(candies.begin(), candies.end());
        
        for(int candi : candies) output.push_back((candi + extraCandies) >= maxCandie);

        return output;
    }
};
