class Solution {
public:
    void solve(vector<int>& nums, vector<int> output, vector<vector<int>>& answer, int index)
    {
        if(index >= nums.size()){ 
            answer.push_back(output);
            return;
        }
        
        solve(nums, output, answer, index + 1);
        output.push_back(nums[index]);
        solve(nums, output, answer, index + 1);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> output;
        int index = 0;
        solve(nums, output, answer, index);
        return answer;
    }
};