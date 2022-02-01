//=======================BRUTE FORCG APPROACH========================//

//Runtime: 10 ms, faster than 8.63% of C++ online submissions for Two Furthest Houses With Different Colors.
//Memory Usage: 9 MB, less than 18.07% of C++ online submissions for Two Furthest Houses With Different Colors.

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDis = 0;
        
        for(int i = 0; i < colors.size(); ++i)
        {
            for(int j = i + 1; j < colors.size(); ++j)
            {
                if(colors[i] != colors[j] && abs(i - j) > maxDis) maxDis = abs(i - j);
            }
        }
        
        return maxDis;
    }
};


//=======================BETTER SOLUTION========================//

//Runtime: 4 ms, faster than 61.18% of C++ online submissions for Two Furthest Houses With Different Colors.
//Memory Usage: 9 MB, less than 18.07% of C++ online submissions for Two Furthest Houses With Different Colors

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDis = 0;
        
        for(int i = 0, j = colors.size() - 1; i < colors.size();)
        {
            if(i == j) {
                ++i;
                j = colors.size() - 1;
                continue;
            }
            if(colors[i] != colors[j] && abs(i - j) > maxDis) {
                maxDis = abs(i - j);
                j = colors.size() - 1;
                ++i;
            }
            else --j;
        }
        
        return maxDis;
    }
};
