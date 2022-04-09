class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        
        if(n == 1) return x;
        
        double bytwo = myPow(x, n/2);
        
        if(n & 1)
        {
            if(n < 0)
                return 1 / x * bytwo * bytwo;
            return x * bytwo * bytwo;    
        }
        else
        {
            return bytwo * bytwo;   
        }
    }
};