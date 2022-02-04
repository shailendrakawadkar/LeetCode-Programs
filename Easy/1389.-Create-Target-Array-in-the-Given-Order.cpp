//Runtime: 5 ms, faster than 19.54% of C++ online submissions for Create Target Array in the Given Order.
//Memory Usage: 8.5 MB, less than 61.73% of C++ online submissions for Create Target Array in the Given Order.

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> output;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            output.insert(output.begin() + index[i], nums[i]); 
        }
        return output;
    }
};
