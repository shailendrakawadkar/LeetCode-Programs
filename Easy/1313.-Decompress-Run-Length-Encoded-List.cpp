//Runtime: 7 ms, faster than 63.71% of C++ online submissions for Decompress Run-Length Encoded List.
//Memory Usage: 10.1 MB, less than 8.41% of C++ online submissions for Decompress Run-Length Encoded List.

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> output;
        for(int i = 1; i < nums.size(); i += 2)
        {
            for(int j = 0; j < nums[i - 1]; ++j)
            {
                output.push_back(nums[i]);
            }
        }
        return output;
    }
};
