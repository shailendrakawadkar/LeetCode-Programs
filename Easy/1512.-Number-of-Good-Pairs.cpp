//--------------BRUTE FORCE----------------//

//Runtime: 4 ms, faster than 38.59% of C++ online submissions for Number of Good Pairs.
//Memory Usage: 7.3 MB, less than 14.46% of C++ online submissions for Number of Good Pairs.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i + 1; j < nums.size(); ++j)
            {
                if(nums[i] == nums[j]) ++count;
            }
        }
        return count;
    }
};


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    

 
//--------------BETTER SOLUTION----------------//

//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Good Pairs.
//Memory Usage: 7.2 MB, less than 57.90% of C++ online submissions for Number of Good Pairs.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> um;
        
        for(int i = 0; i < nums.size(); ++i) ++um[nums[i]];
        
        
        for(auto it : um)
        {
            int size = it.second - 1;
            count = count + size * (size + 1)/ 2;
        }
        return count;
    }
};

