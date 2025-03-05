class Solution {
public:
    long long coloredCells(int n) {
        long long r = n;
        return 1 + 2 * (r-1) * r;

    }
};