class Solution {
public:
    int mySqrt(int x) {
        
        long l = 0, r = x, m, res = 0;

        while (l <= r){
            m = l + (r-l)/2;

            if(m*m > x) r = m - 1;
            else if (m*m < x) {
                l = m + 1;
                res = m;
            }
            else return m;
             
        }
        return res;
    }
};