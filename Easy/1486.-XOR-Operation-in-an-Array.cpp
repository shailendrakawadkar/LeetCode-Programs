//Runtime: 0 ms, faster than 100.00% of C++ online submissions for XOR Operation in an Array.
//Memory Usage: 5.7 MB, less than 95.87% of C++ online submissions for XOR Operation in an Array.

class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        arr[0] = start;
        
        for(int i = 1; i < n; ++i)
        {
            arr[i] = arr[i - 1] ^ (start + 2 * i);
        }
        
        return arr[n - 1];
    }
};
