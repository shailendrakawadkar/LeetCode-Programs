//Runtime: 81 ms, faster than 5.44% of C++ online submissions for Decode XORed Array.
//Memory Usage: 26 MB, less than 30.11% of C++ online submissions for Decode XORed Array.

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> output;
        output.push_back(first);
        
        for(int i = 0; i < encoded.size(); ++i)
        {
            output.push_back(output[i] ^ encoded[i]);
        }
        
        return output;
    }
};
