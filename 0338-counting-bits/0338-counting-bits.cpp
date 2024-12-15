class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);

        for (int v = 1; v <= n; ++v) {
            res[v] = __builtin_popcount(v);
        }

        return res;
    }
};