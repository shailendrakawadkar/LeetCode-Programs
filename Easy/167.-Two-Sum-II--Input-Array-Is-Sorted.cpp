//Runtime: 8 ms, faster than 32.39% of C++ online submissions for Two Sum II - Input Array Is Sorted.
//Memory Usage: 10.2 MB, less than 5.53% of C++ online submissions for Two Sum II - Input Array Is Sorted.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> um;
        vector<int> output;
        
        for(int i = 0; i < numbers.size(); ++i) {
            auto it = um.find(target - numbers[i]);
            if(it != um.end())
            {
                output = {it->second + 1, i + 1};
                break;
            }
            else
            {
                um.insert({numbers[i], i});
            }
        }
        return output;
    }
};
