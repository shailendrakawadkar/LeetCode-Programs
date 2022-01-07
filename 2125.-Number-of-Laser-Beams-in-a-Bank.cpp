class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int output = 0, rowOnes = count(bank[0].begin(), bank[0].end(), '1');
        
        for(int i = 1; i < bank.size(); i++)
        {
            int tempRowOnes = count(bank[i].begin(), bank[i].end(), '1');
            if(tempRowOnes)
            {
                output += rowOnes * tempRowOnes;
                rowOnes = tempRowOnes;   
            }
        }
        return output;
    }
};
