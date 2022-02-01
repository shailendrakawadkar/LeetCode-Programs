//Runtime: 4 ms, faster than 63.60% of C++ online submissions for Check if the Sentence Is Pangram.
//Memory Usage: 6.5 MB, less than 45.37% of C++ online submissions for Check if the Sentence Is Pangram.

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        if(sentence.size() < 26) return false;
        
        int arr[26] = {0};
        
        for(int i = 0; i < sentence.size(); ++i)
        {
            ++arr[(int)sentence[i] - 97];
        }
        
        for(int i = 0; i < 26; ++i)
        { 
            if(!arr[i]) return false;
        }
        
        cout << endl;
        return true;
    }
};
