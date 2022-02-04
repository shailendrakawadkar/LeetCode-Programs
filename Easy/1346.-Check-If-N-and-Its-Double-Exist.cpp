//Runtime: 7 ms, faster than 76.24% of C++ online submissions for Check If N and Its Double Exist.
//Memory Usage: 9.9 MB, less than 82.84% of C++ online submissions for Check If N and Its Double Exist.

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size(); ++i){
            for(int j = 0; j < arr.size(); ++j)
                if(arr[i] == 2 * arr[j] && i != j) return true;
        }
        return false;
    }
};
