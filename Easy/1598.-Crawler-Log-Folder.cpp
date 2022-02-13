//Runtime: 7 ms, faster than 69.10% of C++ online submissions for Crawler Log Folder.
//Memory Usage: 10.4 MB, less than 89.35% of C++ online submissions for Crawler Log Folder.

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ct = 0;
        for(int i = 0; i < logs.size(); ++i)
        {
            if(logs[i] == "../" && ct > 0) --ct;
            else if(logs[i] != "./"&& logs[i] != "../") ++ct;
        }
        
        return ct < 0 ? 0 : ct;
    }
};
