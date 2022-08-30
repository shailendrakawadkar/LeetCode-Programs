class Solution {
public:
    void generate_permute(vector<int> &nums, vector<bool> taken, int psize, vector<vector<int>> &output, int size, vector<int> permutation)
    {
        if(psize == size)
        {
            output.push_back(permutation);
            return;
        }
        
        for(int i = 0; i < size; ++i)
        {
            if(!taken[i])
            {
                taken[i] = true;
                permutation.push_back(nums[i]);
                generate_permute(nums, taken, psize + 1, output, size, permutation);
                permutation.pop_back();
                taken[i] = false;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int size = nums.size();
        vector<bool> taken(size, false);
        vector<vector<int>> output;
        
        generate_permute(nums, taken, 0, output, size, {});
        
        return output;
    }
};