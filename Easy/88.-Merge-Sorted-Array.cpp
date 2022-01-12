//Runtime: 5 ms, faster than 15.96% of C++ online submissions for Merge Sorted Array.
//Memory Usage: 9.2 MB, less than 28.13% of C++ online submissions for Merge Sorted Array.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        for(int i = m, j = 0; i < m + n; ++i, j++)
        {
            nums1[i] = nums2[j];
        }
        
        sort(nums1.begin(), nums1.end());
    }
};
