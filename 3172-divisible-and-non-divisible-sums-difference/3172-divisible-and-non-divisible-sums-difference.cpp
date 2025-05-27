class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s1 = 0, s2 = 0;
        for(int i = 1; i <= n; i++) {
            if (i % m) s2 += i;
            else s1 += i;
        }
        return s2 - s1;
    }
};