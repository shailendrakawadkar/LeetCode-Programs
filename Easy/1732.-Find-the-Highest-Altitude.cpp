class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxElement = 0;
        maxElement = max(maxElement, gain[0]);
        for(int i  = 1; i < gain.size(); ++i)
        {
            gain[i] += gain[i - 1];
            maxElement = max(maxElement, gain[i]);
        }
        
        return maxElement;
    }
};
