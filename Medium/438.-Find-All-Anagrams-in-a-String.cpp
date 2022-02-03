//Runtime: 17 ms, faster than 64.02% of C++ online submissions for Find All Anagrams in a String.
//Memory Usage: 8.7 MB, less than 42.33% of C++ online submissions for Find All Anagrams in a String.

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> output;
        
        if(p.size() > s.size()) return output;
        
        int arr[26] = {0};
        int tempArr[26] = {0};
        for(int i = 0; i < p.size(); ++i) ++arr[p[i] - 'a'];
        
        for(int i = 0; i < p.size(); ++i) ++tempArr[s[i] - 'a'];
        
        int flagF = 0;
            
            for(int j = 0; j < 26; ++j)
            {
                if(arr[j] != tempArr[j]) {
                    flagF = 1;
                    break;
                }
            }
        
        if(!flagF) output.push_back(0);
        
        for(int i = 1; i < s.size() - (p.size() - 1); ++i)
        {
            --tempArr[s[i - 1] - 'a'];
            ++tempArr[s[i + p.size() - 1] - 'a'];
            
            int flag = 0;
            
            for(int j = 0; j < 26; ++j)
            {
                if(arr[j] != tempArr[j]) {
                    flag = 1;
                    break;
                }
            }
            
            if(!flag) output.push_back(i);
        }
        
        return output;
        
    }
};
