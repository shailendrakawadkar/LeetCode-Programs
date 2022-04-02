class Solution {
public:
    long long int binary_search(int n)
    {
        int s = 0, e = n;
        long long int output, mid;
        while(s <= e)
        {
            mid = s + (e - s)/2;
            long long int val = mid * mid;
            if(val == n)
            {
                output = mid;
                break;
            }
            else if(val > n)
            {
                e = mid - 1;
            }
            else
            {
                output = mid;
                s = mid + 1;
            }
        }
        return output;
    }
    int mySqrt(int x) {
        return binary_search(x);
    }
};