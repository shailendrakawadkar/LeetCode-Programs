//Brute Force Approach

class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        vector<long long> output;
        for(int i = 0; i < arr.size(); ++i)
        {
            int interval = 0;
            for(int j = 0; j < arr.size(); ++j)
            {
                if(arr[i] == arr[j] && i != j)
                {
                    interval += abs(i - j);
                }
            }
            output.push_back(interval);
        }
        return output;
    }
};
