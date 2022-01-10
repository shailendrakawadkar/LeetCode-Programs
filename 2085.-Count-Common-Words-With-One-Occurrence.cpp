class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map <string, int>umw1, umw2;
        int count = 0;
        for(string word : words1)
        {
            umw1[word]++;
        }
        for(string word : words2)
        {
            umw2[word]++;
        }
        
        
        for(auto i : umw1)
        {
            if(i.second == 1 && umw2[i.first] == 1)
            {
                ++count;
            }
        }
        return count;
    }
};
