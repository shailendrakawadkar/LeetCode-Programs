class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> um;
        
        vector<int> output;
        
        for(int i = 0; i < nums2.size(); ++i) ++um[nums2[i]];
        
        for(int i = 0; i < nums1.size(); ++i)
        {
            if(um[nums1[i]] > 0) 
            {
                output.push_back(nums1[i]);
                --um[nums1[i]];
            }
        }
        
        return output;
    }
};