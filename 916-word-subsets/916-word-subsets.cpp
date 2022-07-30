class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> output;
        unordered_map<char, int> w2, temp;
        
        vector<unordered_map<char, int>> w1(words1.size());
        
        for(auto word : words2)
        {
            for(auto it : word)
            {
                temp[it]++;
            }
            
            for(auto it : temp)
            {
                if(w2.find(it.first) == w2.end())
                    w2[it.first] = it.second;
                else if(w2[it.first] < it.second)
                    w2[it.first] = it.second;
            }
            temp.clear();
        }
        
        for(int i = 0; i < words1.size(); ++i)
        {
            for(auto it : words1[i])
            {
                temp[it]++;
            }
            
            bool flag = true;
            
            for(auto it : w2)
            {
                if(temp.find(it.first) == temp.end())
                {
                    flag = false;
                    break;
                } else if(temp[it.first] < it.second)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) output.push_back(words1[i]);
            temp.clear();
        }
        return output;
    }
};