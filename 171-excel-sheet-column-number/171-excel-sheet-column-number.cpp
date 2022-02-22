class Solution {
public:
    int titleToNumber(string columnTitle) {
        int output = 0, size = columnTitle.size() - 1;
        for(int i = size; i > -1; --i)
        {
            output += ((columnTitle[i] - 64) * pow(26, size - i));
        }
        return output;
    }
};