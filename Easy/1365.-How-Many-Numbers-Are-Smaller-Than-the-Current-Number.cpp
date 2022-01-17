//---------------BRUTE FORCE APPROACH-----------------//
//Runtime: 87 ms, faster than 9.34% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
//Memory Usage: 10.2 MB, less than 68.24% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> output;
        for(int i = 0; i < nums.size(); ++i)
        {
            int count = 0;
            for(int j = 0; j < nums.size(); ++j)
            {
                if(i != j && nums[j] < nums[i]) ++count;
            }
            output.push_back(count);
        }
        return output;
    }
};
