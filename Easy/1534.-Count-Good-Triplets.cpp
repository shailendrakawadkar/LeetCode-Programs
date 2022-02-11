//=============BRUTE FORCE APPROACH ==============//

//Runtime: 80 ms, faster than 25.12% of C++ online submissions for Count Good Triplets.
//Memory Usage: 8.3 MB, less than 23.03% of C++ online submissions for Count Good Triplets.

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for(int i = 0; i < arr.size(); ++i)
        {
            for(int j = i + 1; j < arr.size(); ++j)
            {
                for(int k = j + 1; k < arr.size(); ++k)
                {
                    if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) ++count;
                }
            }
        }
        return count;
    }
};
