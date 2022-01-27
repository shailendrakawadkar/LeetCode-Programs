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


//Runtime: 62 ms, faster than 37.19% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.
//Memory Usage: 18.5 MB, less than 61.82% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> um;
        int maxLen = 0;
        for(int i = 0; i < rectangles.size(); ++i)
        {
            int val = min(rectangles[i][0], rectangles[i][1]);
            ++um[val];
            maxLen = max(val, maxLen);
        }
        
        return um[maxLen];
    }
};
