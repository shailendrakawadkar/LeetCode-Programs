class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        
        if(nums.size() == 0) return output;
        
        int initial = nums[0];
        
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i] - 1 != nums[i - 1])   
            {
                if(nums[i - 1] == initial)
                    output.push_back(to_string(initial));
                else
                    output.push_back(to_string(initial) + "->" + to_string(nums[i - 1]));
                
                initial = nums[i];
            }
        }
        
         if(nums[nums.size() - 1] == initial)
                    output.push_back(to_string(initial));
                else
                    output.push_back(to_string(initial) + "->" + to_string(nums[nums.size() - 1]));
        
        return output;
    }
};