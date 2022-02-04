//Runtime: 56 ms, faster than 80.99% of C++ online submissions for Count the Number of Consistent Strings.
//Memory Usage: 30.2 MB, less than 62.61% of C++ online submissions for Count the Number of Consistent Strings.

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count = 0;
        
        for(int i = 0; i < words.size(); ++i)
        {
            int flag = 0;
            for(int j = 0; j < words[i].size(); ++j)
            {
                if(allowed.find(words[i][j]) == -1)
                {
                    flag = 1;
                    break;
                }
            }
            
            if(!flag) ++count;
        }
        return count;
    }
};
