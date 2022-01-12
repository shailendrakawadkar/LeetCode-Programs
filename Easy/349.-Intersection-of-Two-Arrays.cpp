//Runtime: 12 ms, faster than 18.97% of C++ online submissions for Intersection of Two Arrays.
//Memory Usage: 10.2 MB, less than 71.71% of C++ online submissions for Intersection of Two Arrays.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> um_num1;
        vector<int> output;
        for(int i = 0; i < nums1.size(); ++i)
        {
            ++um_num1[nums1[i]];
        }
        
        for(int i = 0; i < nums2.size(); ++i)
        {
           if(um_num1.find(nums2[i]) != um_num1.end())
           {
               if(find (output.begin(), output.end(), nums2[i]) == output.end())
               output.push_back(nums2[i]);
           }
        }
        return output;
    }
};
