//================ BRUTE FORCE APPROACH =================//
class Solution {
public:
    struct hashFunction
    {
      size_t operator()(const pair<int , 
                        int> &x) const
      {
        return x.first ^ x.second;
      }
    };
    
    int findPairs(vector<int>& nums, int k) {
        unordered_set<pair<int, int>, hashFunction> us;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i + 1; j < nums.size(); ++j)
            {
                if(abs(nums[i] - nums[j]) == k)
                {
                    us.insert(make_pair(min(nums[i], nums[j]), max(nums[i], nums[j])));
                }
            }
        }
        
        return us.size();
    }
};
