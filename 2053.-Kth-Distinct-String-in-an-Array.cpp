class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       unordered_map<string, int> um;
        for(string i : arr)
        {
            ++um[i];
        }
        
        for(int i = 0; i < arr.size(); ++i)
        {
            if(um[arr[i]] == 1 ) {
                if(k == 1) return arr[i];
                --k;
                
            }
            
        }
        return "";
    }
};
