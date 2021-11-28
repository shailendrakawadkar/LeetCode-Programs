class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == "" && needle.length() > haystack.length())
            return -1;
       return haystack.find(needle); 
    }
};
