class Solution {
public:
    void solve(int index, int target, vector<int> &candidates, vector<int> &temp, set<vector<int>> &s)
    {
        if(target < 0 || index > candidates.size() - 1) return;
        if(target == 0) {
            vector<int> temp_sort = temp;
            sort(temp_sort.begin(), temp_sort.end());
            s.insert(temp_sort);
            temp_sort.clear();
            return;
        }
        
        //picking
        temp.push_back(candidates[index]);
        solve(index, target - candidates[index], candidates, temp, s);
        
        //not picking
        temp.pop_back();
        solve(index + 1, target, candidates, temp, s);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        set<vector<int>> s;
        solve(0, target, candidates, temp, s);
        
        vector<vector<int>> output;
        output.assign(s.begin(), s.end());
        return output;
    }
};