//Runtime: 8 ms, faster than 60.04% of C++ online submissions for Find Numbers with Even Number of Digits.
//Memory Usage: 9.9 MB, less than 11.31% of C++ online submissions for Find Numbers with Even Number of Digits.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for(int i : nums)
        {
            if(to_string(i).size() % 2 == 0) ++count;
        }
        
        return count;
    }
};
