class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        unordered_map<int, int> um;
        vector<int> output;
        for(int i = 0; i < arr.size(); ++i) {
            ++um[arr[i]];
        }
        for(auto it : um)
        {
            if(it.second > arr.size()/3) output.push_back(it.first);
        }
        return output;
    }
};