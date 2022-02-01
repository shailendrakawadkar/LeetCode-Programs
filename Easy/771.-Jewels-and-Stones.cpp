//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and Stones.
//Memory Usage: 6.3 MB, less than 55.22% of C++ online submissions for Jewels and Stones.

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> um;
        int count = 0;
        for(int i = 0; i < stones.size(); ++i) ++um[stones[i]];
        
        for(int i = 0; i < jewels.size(); ++i)
        {
            if(um.find(jewels[i]) != um.end()) count += um[jewels[i]];
        }
        
        return count;
    }
};
