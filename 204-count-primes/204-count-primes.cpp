class Solution {
public:
    int countPrimes(int n) {
        if(n < 2) return 0;
        vector<int> v(n + 1, 1);
        int ct = 0;
        for(int i = 2; i < n; ++i)
        {   if(v[i] == 1)
            {
                for(int j = i + i; j <= n; j += i)
                {
                    v[j] = 0;
                }
                ++ct;
            }
        }
    return ct;
    }
};