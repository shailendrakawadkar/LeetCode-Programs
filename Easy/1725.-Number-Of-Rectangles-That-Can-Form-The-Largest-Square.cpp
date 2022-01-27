//Runtime: 74 ms, faster than 25.62% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.
//Memory Usage: 18.2 MB, less than 97.41% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> um;
        for(int i = 0; i < rectangles.size(); ++i)
        {
            ++um[min(rectangles[i][0], rectangles[i][1])];
        }
        
        int count = 0, maxLen = 0;
        
        for(auto i : um)
        {
            if(i.first > maxLen) {
                count = i.second;
                maxLen = i.first;
            }
            
        }
        return count;
    }
};
