//Runtime: 4 ms, faster than 58.51% of C++ online submissions for Sum of Unique Elements.
//Memory Usage: 8 MB, less than 23.50% of C++ online submissions for Sum of Unique Elements.

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> um;
        int sum = 0;
        
        for(int i : nums) ++um[i];
        
        for(auto it : um) if(it.second == 1) sum += it.first;
        
        return sum;
    }
};
