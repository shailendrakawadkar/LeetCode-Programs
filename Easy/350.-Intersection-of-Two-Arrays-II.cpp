//Runtime: 4 ms, faster than 88.26% of C++ online submissions for Intersection of Two Arrays II.
//Memory Usage: 10.5 MB, less than 43.28% of C++ online submissions for Intersection of Two Arrays II.

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> um;
        vector<int> output;
        
        for(int i = 0; i < nums1.size(); ++i) ++um[nums1[i]];
        
        for(int i = 0; i < nums2.size(); ++i)
        {
            auto it = um.find(nums2[i]);
            
            if(it != um.end() && it->second > 0)
            {
                output.push_back(nums2[i]);
                --(it->second);
            }
        }
        return output;
    }
};
