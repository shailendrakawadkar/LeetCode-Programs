//Runtime: 70 ms, faster than 5.14% of C++ online submissions for Single Number.
//Memory Usage: 20.2 MB, less than 11.32% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;
        int output;
        for(int i = 0; i < nums.size(); ++i)
        {
            ++um[nums[i]];
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um[nums[i]] == 1) { output = nums[i]; break; }
        }
        
        return output;
    }
};

//====================BETTER SOLUTION ====================//

//Runtime: 20 ms, faster than 76.93% of C++ online submissions for Single Number.
//Memory Usage: 16.8 MB, less than 85.89% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = nums[0];
        
        for(int i = 1; i < nums.size(); ++i) number ^= nums[i];
        
        return number;
    }
};
