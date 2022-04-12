class Solution {
public:
    void solve(string digits, int index, string output, vector<string>& answer, unordered_map<char, string>& um)
    {
        if(index >= digits.size())
        {
            if(output.size() > 0)
                answer.push_back(output);
            return;
        }
        
        for(int i = 0; i < um[digits[index]].size(); ++i)
        {
            solve(digits, index + 1, output + um[digits[index]][i], answer, um);
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> um;
        um['2'] = "abc";
        um['3'] = "def";
        um['4'] = "ghi";
        um['5'] = "jkl";
        um['6'] = "mno";
        um['7'] = "pqrs";
        um['8'] = "tuv";
        um['9'] = "wxyz";
        string output = "";
        vector<string> answer;
        solve(digits, 0, output, answer, um);
        return answer;
    }
};