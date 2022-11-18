class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempSum = 0, sum = INT_MIN;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            tempSum += nums[i];
            if(sum < tempSum) sum = tempSum;
            if(tempSum < 0) tempSum = 0;
            
        }
        return sum;
    }
};