class Solution {
public:
    bool is_possible(vector<int>& arr, int n, int m, int mid)
    {
        int count = 1;
        int count_sum = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(count_sum + arr[i] <= mid) count_sum += arr[i];
            else
            {
                ++count;
                count_sum = arr[i];
                
                if(count > m || arr[i] > mid) return false;
            }
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int size = nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int s = mini, e = sum, mid, ans;
        
        while(s <= e)
        {
            mid = s + (e - s) / 2;
            if(is_possible(nums, size, m , mid))
            {
                e = mid - 1;
                ans = mid;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};