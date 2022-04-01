class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> um;
        set<int> s;
        for(auto it : arr) ++um[it];
        for(auto it : um) s.insert(it.second);
        
        if(s.size() == um.size()) return true;
        return false;
    }
};