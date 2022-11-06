class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> um;
        
        for(int i = 0; i < arr.size(); ++i) ++um[arr[i]];
        int ans = -1;
        for(auto it : um)
            if(it.first == it.second) ans = max(ans, it.first);
        
        return ans;
    }
};