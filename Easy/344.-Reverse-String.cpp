//====================Using Two Pointer Technique=================//

//Runtime: 28 ms, faster than 49.68% of C++ online submissions for Reverse String.
//Memory Usage: 23.2 MB, less than 76.48% of C++ online submissions for Reverse String.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        for(int i = 0; i < size/2; ++i)
        {
            swap(s[i], s[size - 1 - i]);
        }
    }
};

