//Runtime: 26 ms, faster than 5.50% of C++ online submissions for Shuffle the Array.
//Memory Usage: 9.7 MB, less than 84.66% of C++ online submissions for Shuffle the Array.

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int temp = 1;
     for(int i = nums.size() - n; i < nums.size() - 1; ++i)
     {
         int val =  nums[i];
         nums.erase(nums.begin() + i);
         nums.insert(nums.begin() + temp, val);
         temp += 2;
     }
        return nums;
    }
};
