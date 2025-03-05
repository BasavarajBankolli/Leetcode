class Solution {
public:
    long long coloredCells(int n) {
        long long res = 1LL;
        
        for (int i = 1; i < n;i++){
            res += (i * 4)*1LL;
        }
        return res;

    }
};